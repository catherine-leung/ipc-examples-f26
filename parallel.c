/*How to design the storage of a class of student marks*/
/*For now store the following:
	* every student number
	* every midterm mark
	* every final grade
*/
#define MAX 40
#include <stdio.h>
int linearSearch(int data[], int used, int key);

int main(void){
	int numStudent = 3;
	//3 parallel arrays
	int studentNumbers[MAX] = { 54321, 67891, 12345};
	double midterms[MAX] = {36.5, 47, 26};
	double final[MAX]= {25.5, 43, 37};
	int stnum;
	int location;
	printf("Enter a student number: ");
	scanf("%d", &stnum);

	location = linearSearch(studentNumbers, numStudent, stnum);
	//print out that student's midterm and final marks

	if(location == -1){
		printf("%d was not found\n", stnum);
	}
	else{
		printf("%d's grades. Midterm: %.2lf , Final: %.2lf\n", stnum, 
									midterms[location], final[location]);
	}

	bubbleSort(studentNumbers, 3);

}
/*this function is passed an array of integers and how many elements are used
within the array.  It is also passed the number we are looking for in key.
Function returns index of where key is found in data or -1 if not found*/
int linearSearch(int data[],  int used, int key)
{
	int rc = -1;
	int i;
	//this continuation condition say:
		//if I haven't found it and I am not at the end
	for(i = 0;rc == -1  && i < used; i++){
		if(data[i] == key){
			rc = i;
		}
	}
	return rc;
}

void bubbleSort(int data[],double midterms[], double finals[], int used){
	//go through array, comparing adjacent pairs, 
	//swap if not in correct order
	int i;
	int tmp;
	double dtmp;

	for(i = 0 ;i < used - 1; i++){
		for (j = 0;j< used - i - 1;j++){
			if(data[j] > data[j+1]){
				tmp = data[j];
				data[j] = data[j+1];
				data[j+1]=tmp;

				dtmp = midterms[j];
				midterms[j]=midterms[j+1]
				midterms[j+1]=dtmp;

				dtmp = finals[j];
				finals[j]=finals[j+1]
				finals[j+1]=dtmp;

			}


		}	
	}
}

void bubbleSort(double data[], int used){
	//go through array, comparing adjacent pairs, 
	//swap if not in correct order
	int i;
	int tmp;

	for(i = 0 ;i < used - 1; i++){
		for (j = 0;j< used - i - 1;j++){
			if(data[j] > data[j+1]){
				tmp = data[j];
				data[j] = data[j+1];
				data[j+1]=tmp;
			}
		}	
	}
}






