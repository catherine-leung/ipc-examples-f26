#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	//this is a variable of type integer
	int numFaces;
	int roll;
	srand(time(NULL));
	printf("Dice Roller Program\n");
	printf("How many faces is on your dice: ");
	scanf("%d",&numFaces);

	roll = rand();

	// roll % numFaces will guarantee a number betwen 0 and numFaces - 1
	// roll % numFaces + 1 shifts the range to 1 and numFaces inclusive
	roll = roll % numFaces + 1;

	printf("Your roll on a %d face dice is: %d\n", numFaces, roll);
	
}