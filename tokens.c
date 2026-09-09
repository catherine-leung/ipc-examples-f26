#include <stdio.h>

//this is NOT something you need to learn right now.. parts of this aren't even in the course.
//this is just based on the conversation of "what is the void" in the brackets
//void means nothing.. when we start the program we are not giving anything to this main
//this version however, means we are providing things on the command line when we run our
//program
//argc is how many tokens are on the command line
//argv is a list of the tokens
int main(int argc, char* argv[])
{
	int i;

	//this is output.. the %d here is like a blank.  we fill in the blank
	//with the value in argc
	printf("there were %d tokens on the command line\n", argc);


	//this is called a loop.  We will cover this around week 4.  
	//all you need to know is that the printf between the {} will
	//happen exactly argc time
	for (i = 0;i<argc;i++){

		//there are two blanks here, %d and %s.  %d means whatever fills in that
		//blank is an integer (base 10), %s means whatever fills in that blank
		//is a string (a sequence of characters... more on this after the break week)
		printf("token %d: %s\n",i+1,argv[i]);
	}
	return 0;

}