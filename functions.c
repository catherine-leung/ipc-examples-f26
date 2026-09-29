//this include lets me use input/output functions like printf and scanf
//What this actually does is....copies the entire stdio.h file and replaces
//the include statement with its contents
#include <stdio.h>
//Declaration Before Use means that everything must be declared
//before we can use it
void printBanner(void);
int readNumber(int promptNumber);
void printResults(int num1,int num2, int sum,
					 int diff, int prod, int quot);

void getResults(int num1, int num2);

//this program will ask the user to enter two numbers.  it will then calculate
//its sum, difference, product and quotient

//every C program has a main function.  This is where everything starts
int main(void)
{
	int num1;
	int num2;
	//function call to the printBanner function
	//program will execute the printBanner function from
	//beginning to end before continuing onto the next
	//step in main.
	printBanner();
	num1 = readNumber(1);
	num2 = readNumber(2);
 	getResults(num1, num2);

	printBanner();
	num1 = readNumber(3);
	num2 = readNumber(4);
 	getResults(num1, num2);


	printBanner();
	num1 = readNumber(5);
	num2 = readNumber(6);
 	getResults(num1, num2);



	return 0;

}

void printResults(int num1,int num2, int sum,
					 int diff, int prod, int quot)
{
	printf("%d + %d = %d\n", num1, num2, sum);
	printf("%d - %d = %d\n", num1, num2, diff);
	printf("%d * %d = %d\n", num1, num2, prod);
	printf("%d / %d = %d\n", num1, num2, quot);
}

//This is a function definition
void printBanner(void)
{
	//print a banner
	printf("Calculator Program\n");
	printf("==================\n");

}

int readNumber(int promptNumber)
{
	int num;
	printf("Please enter number %d: ", promptNumber);
	scanf("%d", &num);
	return num;
}

//this function accepts 2 numbers.  It will calculate
//the sum, difference, product and quotient for the 2
//numbers and print out the results
void getResults(int num1, int num2)
{
	int sum;
	int difference;
	int product;
	int quotient;
	sum = num1 + num2;
	difference = num1 - num2;
	product = num1 * num2;
	quotient = num1 / num2;
	printResults(num1, num2, sum, difference, product,quotient);

}




