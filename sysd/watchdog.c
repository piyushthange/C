#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <signal.h>
#include <sys/inotify.h>
#include <libnotify/notify.h>

#define EXT_SUCCESS 0
#define EXT_ERR_TOO_FEW_ARGS 1
#define EXT_ERR_INIT_INOTIFY 2
#define EXT_ERR_ADD_WATCH 3
#define EXT_ERR_BASE_PATH_NULL 4
#define EXT_ERR_READ_INOTIFY 5
#define EXT_ERR_INIT_LIBNOTIFY 6

int IeventQ = -1;
int IeventStatus = -1;

char *ProgramTitle = "watchdog";

int main(int argc, char *argv[]) {

	bool libnotifyInitStatus = false;

	char *basePath = NULL;
	char *token = NULL;
	char *notificationMsg = NULL;
	
	NotifyNotification *notifyHandle;
	const struct inotify_event *watchEvent;
	
	uint32_t watchMask = IN_CREATE | IN_DELETE | IN_ACCESS | IN_CLOSE_WRITE | IN_MODIFY | IN_MOVE_SELF;
	char buffer[4096];
	int readLen;

	if (argc < 2) {
		fprintf(stderr, "USAGE: watchdog PATH\n");
		exit(EXT_ERR_TOO_FEW_ARGS);
	}
	
	basePath = (char *)malloc(sizeof(char)*(strlen(argv[1]) + 1));
	strcpy(basePath, argv[1]);

	token = strtok(basePath, "/");
	while (token != NULL) {
		basePath = token;
		token = strtok(NULL, "/"); 
	}

	if (basePath == NULL) {
		fprintf(stderr, "Error getting base path!\n");
		exit(EXT_ERR_BASE_PATH_NULL);
	}
	
	libnotifyInitStatus = notify_init(ProgramTitle);
	if (!libnotifyInitStatus) {
		fprintf(stderr, "Error initialising libontify!\n");
		exit(EXT_ERR_INIT_LIBNOTIFY);
	}
	
	IeventQ = inotify_init();
	if (IeventQ == -1) {
		fprintf(stderr, "Error initializing inotify instance!\n");
		exit(EXT_ERR_INIT_INOTIFY);
	}

	printf("%s\n", basePath);
	IeventStatus = inotify_add_watch(IeventQ, argv[1], watchMask);

	if (IeventStatus == -1) {
		fprintf(stderr, "Error adding file to watch instance!\n");
		exit(EXT_ERR_ADD_WATCH);
	}

	while (true) {
		printf("Wating for ievent...\n");		
		readLen = read(IeventQ, buffer, sizeof(buffer));

		if (readLen == -1) {
			fprintf(stderr, "Error reading from inotify instance!\n");
			exit(EXT_ERR_READ_INOTIFY);
		}

		for (char *buffptr = buffer; buffptr < buffer + readLen; buffptr += sizeof(struct inotify_event) + watchEvent->len) {

			notificationMsg = NULL;
			watchEvent = (const struct inotify_event *) buffptr;

			if (watchEvent->mask & IN_CREATE) {
				notificationMsg = "File created.\n";
			}
			if (watchEvent->mask & IN_DELETE) {
				notificationMsg = "File deleted.\n";
			}
			if (watchEvent->mask & IN_ACCESS) {
				notificationMsg = "File Accessed.\n";
			}
			if (watchEvent->mask & IN_CLOSE_WRITE) {
				notificationMsg = "File written and closed.\n";
			}
			if (watchEvent->mask & IN_MODIFY) {
				notificationMsg = "File modified.\n";
			}
			if (watchEvent->mask & IN_MOVE_SELF) {
				notificationMsg = "File moved.\n";
			}

			if (notificationMsg == NULL) {
				continue;
			}

			notifyHandle = notify_notification_new(basePath, notificationMsg, "dialog-information");
			if (notifyHandle == NULL) {
				fprintf(stderr, "notification handle was null!\n");
				continue;
			}
			notify_notification_show(notifyHandle, NULL);
			
			printf("%s\n", notificationMsg);
		}
	}
	exit(0);
}
