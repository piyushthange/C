#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ncurses.h>

#define LONG_BREAK 20
#define SESSIONS 4

void start();
void stop();
void reset();
void br();
void end();

int main(int argc, char *argv[])
{
	initscr();
	int yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);

	/* WINDOW *win = newwin(height, width, start_y, start_x); */
	WINDOW *intro = newwin(5, 3, 10, 10);
	box(intro, 3, 5);
	mvwprintw(intro, 2, 55 , "Hello, World!");
	mvwprintw(intro, 3, 45,"+------------------------------+");
	mvwprintw(intro, 4, 50, "Welcome to Pi-Pomodoro!");
	refresh();


	//mvprintw(yMax/2, xMax/2, "hello"); 

	WINDOW *inputwin = newwin(3, xMax-12, yMax-5, 5);
	box(inputwin, 0, 0);
	refresh();
	wrefresh(inputwin);

	keypad(inputwin, true);

	int c = wgetch(inputwin);
	if(c == KEY_UP){ 
		mvwprintw(inputwin, 1, 1, "you pressed up!");
		wrefresh(inputwin);
	}
	//system("./pl jaane_kya_dhoondta_hai_ye.mp3");
	getch();
	endwin();

	return 0;
}

void start()
{

}

void stop()
{

}

void reset()
{

}

void br()
{

}

void end()
{
	cbreak();
}
