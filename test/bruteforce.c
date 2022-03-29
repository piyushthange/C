#include <stdio.h>
#include <stdlib.h>
#include "md5.h"

#define TARGET "de1b1a7baf7850243db71c4abd4e5a39"

int main()
{
	char word[10] = "-----";
	for (char c0 = 'a'; c0 <= 'z'; c0++) {
		for(char c1 = 'a'; c1 <= 'z'; c1++){
			for(char c2 = 'a'; c2 <= 'z'; c2++){
				for(char c3 = 'a'; c3 <= 'z'; c3++){
					for(char c4 = 'a'; c4 <= 'z'; c4++){
						word[0] = c0;	
						word[1] = c1;	
						word[2] = c2;	
						word[3] = c3;	
						word[4] = c4;	
					}
				printf("%s", word);
				}
			}
		}
	}
	return 0;	
}
