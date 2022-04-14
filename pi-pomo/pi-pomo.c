#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <curses.h>
#include <unistd.h>

int hrs = 0, min = 0, sec = 0, flag = 0;

void delay(int ms);
int counter();
int selection();
int printData();

int main()
{
	initscr();
	printf("Hello World!\n");
	while(1){
		counter();
	}

	endwin();
	return 0;
}

void delay(int ms)
{
	clock_t timeDelay = ms + clock();
	while(timeDelay > clock());
}

int sel()
{
	switch(getch()){
	case 49:
		flag = 0;
		break;
	case 50:
		flag = 1;
		break;
	case 51:
		hrs = min = sec = 0;
		flag = 1;
		printData();
		break;
	case 52:
		exit(0);
		break;
	}
}

int printData()
{
	printf("1.Start 2.Stop 3.Reset 4.End \n");
	printf("*******************************\n");
	printf("              %d%d%d\n", hrs,min,sec);
	printf("*******************************\n");

}

int counter()
{
	while(getch() && flag == 0) {
		if(min > 59) {
			min = 0;
			++hrs;
		}
		if(sec > 59) {
			sec = 0;
			++min;
		}
		printData();
		delay(100);
		sec += 1;
	}
	sel();
}
