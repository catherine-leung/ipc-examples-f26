#include <stdio.h>
#define CAPACITY 10
void printArray(int array[], int used);

int main(void)
{
	int array[CAPACITY]={5,3,1};
	int used = 3;
	printArray(array,used);

	printArray(array,used);

}

void printArray(int array[], int used)
{
	int i;

	for(i = 0;i<used;i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	used = 5;
	array[0] = 123456;
}
