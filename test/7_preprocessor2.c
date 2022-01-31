
/* here use the gcc =E =c processor.c command to generate the preprocessing
 * output and you can see the whole code preprocessed
 */ 

#define NUM1 3
#define NUM2 5

#define ADD		/* this will be preprocessed and then the
			 * if condition will run.
			 */

int main(int argc, char *argv[]){
	
	int i;
	int j;

/* below is the statement that 
 * "if ADD is defined then do the following else do the rest"
 * The add must be defined above main so that the preprocessor can detect it
 * after the preprocessor detects the defined function the it will run the 
 * statement in if condition else the rest;
 */

#ifdef ADD
	int sum = i + k;
#else
	sum = i + k + 10;
#endif

	return 0;
}
