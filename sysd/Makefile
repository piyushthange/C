CFLAGS= -Wall -pedantic -std=gnu99

all: watchdog

watchdog:
	gcc $(CFLAGS) `pkg-config --cflags --libs libnotify` watchdog.c -o build/watchd
