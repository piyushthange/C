#include <ncurses.h>
#include <string.h>
#include <stdio.h>

int main()
{
	initscr();

	int height, width, y, x;
	height = 5; width = 40;	y = 2;	x = 45;
	/* -------------------- intro start --------------- */
	WINDOW *intro = newwin(height, width, y, x);
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

	/* ----------------------start end---------------*/

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

	keypad(start, true);
	keypad(stop, true);
	keypad(br, true);
	keypad(reset, true);
	keypad(end, true);

	char *choices[5] = {"start", "stop", "br", "reset", "end"};
	int choice;
	int highlight = 0;

	wattron(start, A_REVERSE);
	wrefresh(start);
	
//	while(1) {
//		if(highlight == 0){
//			wattron(start, A_REVERSE);
//			refresh();
//		}
//		else if(highlight == 1){
//			wattroff(start, A_REVERSE);
//			wattron(stop, A_REVERSE);
//			refresh();
//		}
//		else if(highlight == 2){
//			wattroff(stop, A_REVERSE);
//			wattron(br, A_REVERSE);
//			refresh();
//		}
//		else if(highlight == 3){
//			wattroff(br, A_REVERSE);
//			wattron(reset, A_REVERSE);
//			refresh();
//		}
//		else if(highlight == 4){
//			wattroff(reset, A_REVERSE);
//			wattron(end, A_REVERSE);
//			refresh();
//		}
//
//		switch(choice) {
//		case KEY_LEFT:
//			highlight--;
//			if(highlight == -1)
//				highlight = 0;
//			break;
//		case KEY_RIGHT:
//			highlight++;
//			if(highlight == 5)
//				highlight = 4;
//			break;
//		default:
//			break;
//		}
//		if(choice == 10)
//			break;
//	}

	int k = getch();

	endwin();
}
