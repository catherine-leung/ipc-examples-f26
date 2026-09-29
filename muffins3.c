#include <stdio.h>

//this program calculates the cost of muffins purchased
//at a store where there are 2 types of muffins.
//basic - 1.00 each
//premium - 2.00 each
//program will ask the user for how many of each type of muffins they wish to buy
//then it will calculate the total price
//this will apply taxes @ 13% if user purchases fewer than 6 muffins
//A user can optionally add chocolate chips @ 0.10 per muffin, sprinkles@0.15 muffin
//icing@0.25 per muffin
#define BASICPRICE 1.00
#define PREMIUMPRICE 2.00

void printBanner(void);
int readBasic(void);
int readPremium(void);
char readIcing(void);
char readSprinkles(void);
char readChocolate(void);

double totalPrice(int numBasic, int numPremium);
void outputResult(int numBasic, int numPremium, double total);

int main(void)
{
	//variables
	int numBasic;
	int numPremium;
	double total;
	char sprinkles;
	char icing;
	char chocolate;
	//banner
	printBanner();

	//prompt for number of basic muffins
	//read number of basic muffins
	numBasic = readBasic();

	//prompt for number of premium muffins
	//read number of premium muffins
	numPremium = readPremium();

	icing = readIcing();
	sprinkles = readSprinkles();
	chocolate = readChocolate();

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
	double total = numBasic * BASICPRICE + numPremium * PREMIUMPRICE;
	double tax;
	if(numBasic + numPremium < 6){
		//fewer than 6 muffins makes them snacks so we need to charge 13% tax
		tax = 0.13 * total;
		total = total + tax;
		//total *= 1.13
	}

	return total;
}



void outputResult(int numBasic, int numPremium, double total)
{
	printf("Number of Basic Muffins: %d\n", numBasic);
	printf("Number of Premimum Muffins: %d\n", numPremium);
	printf("Total Price %.2lf\n", total);
}

char readIcing(void){
	char icing;
	printf("Would you like icing? (y/n) ");
	scanf(" %c", &icing);
	return icing;	
}
char readSprinkles(void){
	char sprinkles;
	printf("Would you like sprinkles? (y/n) ");
	scanf(" %c", &sprinkles);
	return sprinkles;	
}
char readChocolate(void)
{
	char chocolate;
	printf("Would you like chocolate chips? (y/n) ");
	scanf(" %c", &chocolate);
	return chocolate;
}

