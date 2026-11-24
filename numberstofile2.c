//write a program that will ask user to 
//enter in numbers
//write all numbers entered into a file 
//called numbers.txt, one per line
//use 0 to stop program and not stored

#include <stdio.h>

int main(void)
{
	int number;
	FILE* handle = fopen("numbers.txt", "a");
	printf("Please enter a number: ");
	scanf("%d",&number);
	while(number != 0){
		fprintf(handle, "%d\n", number);
		printf("Please enter a number: ");
		scanf("%d",&number);
	}
	fclose(handle);
	return 0;
}