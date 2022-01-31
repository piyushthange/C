
/* here use the gcc =E =c processor.c command to generate the preprocessing
 * output and you can see the whole code preprocessed
 */ 

#define NUM1 3
#define NUM2 5

/* sum could be defined below as well */

#define SUM(x,y) x+y

int main(int argc, char *argv[]){
	
	int i;
	int j;
	int sum;
	int sum_defined;

	i = NUM1;
	j = NUM2;
	
	sum = i + j;
	sum = NUM1 + NUM2;

	sum_defined = SUM(NUM1,NUM2);
	// or else could be defined as below
	sum_defined = SUM(i, j);
	
	return 0;
}
