#include <stdio.h>

//this program calculates the cost of muffins purchased
//at a store where there are 2 types of muffins.
//basic - 1.00 each
//premium - 2.00 each
//program will ask the user for how many of each type of muffins they wish to buy
//then it will calculate the total price

#define BASICPRICE 1.00
#define PREMIUMPRICE 2.00

void printBanner(void);
int readBasic(void);
int readPremium(void);
double totalPrice(int numBasic, int numPremium);
void outputResult(int numBasic, int numPremium, double total);

int main(void)
{
	//variables
	int numBasic;
	int numPremium;
	double total;
	//banner
	printBanner();

	//prompt for number of basic muffins
	//read number of basic muffins
	numBasic = readBasic();

	//prompt for number of premium muffins
	//read number of premium muffins
	numPremium = readPremium();

	//calculate total price
	total = totalPrice(numBasic, numPremium);

	//output result
	outputResult(numBasic, numPremium, total);

}

void printBanner(void)
{
	printf("Welcome to the IPC bakery\n");
}

int readBasic(void)
{
	int numBasic;
	printf("Please enter how many basic muffins you would like: ");
	scanf("%d", &numBasic);
	return numBasic;
}
int readPremium(void)
{

	int numPremium;
	printf("Please enter how many premium muffins you would like: ");
	scanf("%d", &numPremium);
	return numPremium;

}

double totalPrice(int numBasic, int numPremium)
{
	return numBasic * BASICPRICE + numPremium * PREMIUMPRICE;
}

void outputResult(int numBasic, int numPremium, double total)
{
	printf("Number of Basic Muffins: %d\n", numBasic);
	printf("Number of Premimum Muffins: %d\n", numPremium);
	printf("Total Price %.2lf\n", total);
}

