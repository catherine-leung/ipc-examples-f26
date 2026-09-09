/*this program is used to demonstrate use of libraries beyond stdio.h.
It contains things that I do not expect you to know until week 10 or 11.
Feel free to read the code, even get it to try on your own computers */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	//these are variables of type integer
	//they are space reserved to hold a whole number
	int numFaces;
	int roll;

	//srand() is short for seed random.  time(NULL) gets the current time
	//doing the line of code below allows us to get a different sequence of random numbers
	srand(time(NULL));


	printf("Dice Roller Program\n");
	printf("How many faces is on your dice: ");

	//read a how many faces from user.  the & means address of
	//this line below means read a whole number from the user and store it
	//into the memory location for numFaces
	scanf("%d",&numFaces);

	//generate a random number.. on my computer this is between 0 and around 2 billion
	roll = rand();

	// roll % numFaces calculates remainder of roll/numFaces.  The % is the
	// modulus (remainder) operator.  if you take any positive number x and calculate
	// x % n, the result is always between 0 and n-1 inclusive.   Thus, calculating
	// roll % numFaces will guarantee a number betwen 0 and numFaces - 1
	// roll % numFaces + 1 shifts the range to 1 and numFaces inclusive
	roll = roll % numFaces + 1;

	//output result
	printf("Your roll on a %d face dice is: %d\n", numFaces, roll);
	
}