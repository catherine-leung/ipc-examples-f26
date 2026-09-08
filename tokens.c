#include <stdio.h>

//this is NOT something you need to learn.. just demo
int main(int argc, char* argv[])
{
	int i;
	printf("there were %d tokens on the command line\n", argc);
	for (i = 0;i<argc;i++){
		printf("token %d: %s\n",i+1,argv[i]);
	}
	return 0;

}