//write a program that will ask user to 
//enter in numbers
//write all the positive numbers entered into positive.txt
//write all the negative numbers entered into negative.txt
//use 0 to stop program and 0 is not stored in either files#include <stdio.h>
//all values should add to existing values in a file
#include <stdio.h>
int main(void)
{
	int number;
	FILE* positive = fopen("positive.txt", "a");
	FILE* negative = fopen("negative.txt", "a");
	printf("Please enter a number: ");
	scanf("%d",&number);
	while(number != 0){
		if(number > 0){
			fprintf(positive, "%d\n", number);
		}
		else{
			fprintf(negative, "%d\n", number);
		}
		printf("Please enter a number: ");
		scanf("%d",&number);
	}
	fclose(positive);
	fclose(negative);

	return 0;
}