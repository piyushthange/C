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
	int ym, xm;
	getmaxyx(stdscr, ym, xm);

	int height, width, y, x;
	height = 5; width = 40;	y = 2;	x = 45;
	/* -------------------- intro start --------------- */
	/* WINDOW *win = newwin(height, width, start_y, start_x); */
	WINDOW *intro = newwin(height, width, y, xm/4);
	refresh();

	box(intro, 0, 0);
	mvwprintw(intro, 1, 15 , "Hello, World!");
	mvwprintw(intro, 2, 2,"+----------------------------------+");
	mvwprintw(intro, 3, 10, "Welcome to Pi-Pomodoro!");
	wrefresh(intro);

	/* -----------------------------intro end----------------*/
	
	/* ----------------------i/p window---------------*/

	height = 3; width = 7; y = 8; x = 12;
	WINDOW *inputwin = newwin(height, width, y, x);
	refresh();
	/* box(wind, <left-right>, <top-bottom> */
	box(inputwin, 0, 0);
	//int c = wgetch(inputwin);
	//keypad(inputwin, true);
	wrefresh(inputwin);

//	if(c == KEY_UP){ 
//		mvwprintw(inputwin, 1, 1, "you pressed up!");
//		wrefresh(inputwin);
//	}

	/* ----------------------i/p window end---------------*/

//	wborder(win, left, right, top, bottom, top_left_corner, top_right_corner, bot_lef_c, bot_rig_c);
	
	
	/* ----------------------start---------------*/
	height = 3; width = 9; y = 13; x = 20;
	WINDOW *start = newwin(height, width, y, x);
	refresh();
	box(start, 0, 0);
	mvwprintw(start,1,2, "Start");
	wrefresh(start);


	/* ----------------------stop---------------*/
	height = 3; width = 9; y = 13; x = 30;
	WINDOW *stop = newwin(height, width, y, x);
	refresh();
	box(stop, 0, 0);
	mvwprintw(stop,1,2, "Stop");
	wrefresh(stop);
	/* ----------------------stop-end---------------*/

	/* ----------------------break---------------*/
	height = 3; width = 9; y = 13; x = 40;
	WINDOW *br = newwin(height, width, y, x);
	refresh();
	box(br, 0, 0);
	mvwprintw(br,1,2, "Break");
	wrefresh(br);

	/* ----------------------break-end---------------*/

	/* ----------------------Reset---------------*/
	height = 3; width = 9; y = 13; x = 50;
	WINDOW *reset = newwin(height, width, y, x);
	refresh();
	box(reset, 0, 0);
	mvwprintw(reset,1,2, "Reset");
	wrefresh(reset);

	/* ----------------------Reset-end---------------*/

	/* ----------------------exit---------------*/
	height = 3; width = 9; y = 13; x = 60;
	WINDOW *end = newwin(height, width, y, x);
	refresh();
	box(end, 0, 0);
	mvwprintw(end,1,2, "Exit");
	wrefresh(end);

	/* ----------------------exit-end---------------*/

	keypad(stdscr, true);
//	keypad(start, true);
//	keypad(stop, true);
//	keypad(br, true);
//	keypad(reset, true);
//	keypad(end, true);

	//char **choices[4] = {start, stop, br, reset, end};
	int choice;
	int hl = 0;

	while(1){
		for (int i = 0; i < 5; i++){
			if(i == hl){
				wattron(start, A_REVERSE);
				mvwprintw(start,1,2, "Start");
				wattroff(stop, A_REVERSE);
				wattroff(reset, A_REVERSE);
				wattroff(br, A_REVERSE);
				wattroff(end, A_REVERSE);
				wrefresh(start);
				break;
			}
			wattroff(start, A_REVERSE);
			if(i == hl+1){
				wattron(stop, A_REVERSE);
			wattroff(start, A_REVERSE);
			mvwprintw(stop,1,2, "Stop");
			wattroff(stop, A_REVERSE);
			wrefresh(stop);
			break;
			}
			if( i == hl+2){
				wattron(reset, A_REVERSE);
			mvwprintw(reset,1,2, "Reset");
			wrefresh(reset);
			wattroff(start, A_REVERSE);
			wattroff(stop, A_REVERSE);
			wattroff(reset, A_REVERSE);
			wattroff(br, A_REVERSE);
			wattroff(end, A_REVERSE);
			break;
			}
			if( i == hl+3){
				wattron(br, A_REVERSE);
			mvwprintw(br,1,2, "Break");
			wrefresh(br);
			wattroff(start, A_REVERSE);
			wattroff(stop, A_REVERSE);
			wattroff(reset, A_REVERSE);
			wattroff(br, A_REVERSE);
			wattroff(end, A_REVERSE);
			refresh();
			break;
			}
			if( i == hl+4){
				wattron(end, A_REVERSE);
			mvwprintw(end,1,2, "Exit");
			wrefresh(end);
			wattroff(start, A_REVERSE);
			wattroff(stop, A_REVERSE);
			wattroff(reset, A_REVERSE);
			wattroff(br, A_REVERSE);
			wattroff(end, A_REVERSE);
			refresh();
			break;
			}
		}
		choice = getch();
		switch(choice){
		case KEY_LEFT:
			hl--;
			if(hl == -1)
				hl = 0;
			break;
		case KEY_RIGHT:
			hl++;
			if(hl == 5)
				hl = 4;
			break;
		default:
			break;
		}
	}
	int k = getch();

	//system("./pl jaane_kya_dhoondta_hai_ye.mp3");
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

