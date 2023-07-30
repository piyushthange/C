#include <stdio.h>
#include <stdlib.h>

#define BUFF 1000

int main(){
	FILE *f;
	f = fopen("hello.txt", "w");
	int a;
	while((char)a != EOF){
		fwrite(NULL, BUFF, sizeof(BUFF), NULL, f);
	}
	/* just checking out */
	
}
