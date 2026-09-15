//this include lets me use input/output functions like printf and scanf
//What this actually does is....copies the entire stdio.h file and replaces
//the include statement with its contents
#include <stdio.h>


//this program will ask the user to enter two numbers.  it will then calculate
//its sum, difference, product and quotient.  The results will be stored as floating
//point values and we will output to 2 decimal pla

//every C program has a main function.  This is where everything starts
int main(void)
{
	int num1;
	int num2;
	float sum;
	float difference;
	float product;
	float quotient;

	//print a banner
	printf("Calculator Program\n");
	printf("==================\n");

	//print a prompt
	printf("Please enter a number: ");

	//read the first number
	//the %d tells the computer, I am expecting a whole number
	//& is the address of  operator
	//&num1 is the address of num1 in memory
	scanf("%d", &num1);


	//print a prompt
	printf("Please enter another number: ");

	//read the second number
	scanf("%d", &num2);

    printf("num1: %d num2: %d\n", num1, num2);

	sum = num1 + num2;
	difference = num1 - num2;
	product = num1 * num2;
	quotient = num1 / num2;

	printf("%d + %d = %f\n", num1, num2, sum);
	printf("%d - %d = %f\n", num1, num2, difference);
	printf("%d * %d = %f\n", num1, num2, product);
	printf("%d / %d = %f\n", num1, num2, quotient);
	return 0;




















}