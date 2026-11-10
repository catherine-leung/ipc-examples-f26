
#include <stdio.h>
void drawTriangle(int size)
{
	for(int i = 0;i < size;i++){

		for(int j = 0;j<size;j++){
			printf("*");
		}
		printf("\n");
	}



	
}

int main(void)
{
	drawTriangle(6);
}
