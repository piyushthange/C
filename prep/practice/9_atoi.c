/* atoi: convert s to integer */
//#include <stdio.h>
//
//int atoi(char s[]);
//int main()
//{
//	char a[] = "asdlf4234";
//	printf("%d\n", atoi(a));
//}
//
//int atoi(char s[])
//{
//	int i, n;
//	n = 0;
//	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
//		n = 10 * n + (s[i] - '0');
//	
//	return n;
//}

#include <stdio.h>

int atoi(char s);

int main(int arc, char *argv[])
{
	char *a = "1234";
	atoi(a);

	return 0;

}

int atoi(char s){
	int n;
	for (int i =0; *s[i] >= '0' && *s[i] <= '9'; i++) {
		n = 10 * n + (*s[i] - '0');
	}
	return n;
}
