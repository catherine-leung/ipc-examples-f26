#include <stdio.h>

int countPositive()
{
    int numPositives = 0;
    int input = 1;
    while (input != 0){
        printf("Enter a number (0 to stop): ");
        scanf("%d", &input);
        if(input > 0){
            numPositives++;
        }
    }
    return numPositives;
}

int main(void)
{

    int count = countPositive();
    printf("number of positives entered = %d\n", count);
    return 0;
}