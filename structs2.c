#include <stdio.h>
#define NUMQUIZ 6
#define MUMLABS 9
#define NUMPROJECT 2
//Structs allow you to create new data types
//this is a struct definition.  Every student has this
//info associated with them
struct Student
{
	char name[201];
	int studentNumber;
	double quiz[NUMQUIZ];
	double labs[NUMLABS];
	double projects[NUMPROJECT];
	double midterm;
	double final;
	char finalletterGrade[4];
};

double average(double data[], int used, int smallestIdx);
int smallest(double data[], int used);

int main(void)
{

	struct Student s1 = {
		"Austin",
		123456789,
		{9, 8, 7, 4, 7 , 6},
		{1,0.5,1, 1, 1,0, 0.5, 1, 1},
		{15, 16.5},
		35,
		0,
		"---"
	};
	int i;
	double avg = 0;

	//index of smallest element in array

	//print s1's name and student number in form name - student #
	printf( "%s - %d\n",s1.name, s1.studentNumber );
	printf("please enter this student's midterm grades: ");
	scanf("%lf", &s1.midterm);

	int smallestIdx = smallest(s1.quiz, NUMQUIZ);
	avg = average(s1.quiz, NUMQUIZ, smallestIdx);


	printf("Average of quiz marks = %.2lf\n", avg);

	smallestIdx = smallest(s1.labs, NUMLABS);
	avg = average(s1.labs, NUMLABS, smallestIdx);

	printf("Average of lab marks = %.2lf\n", avg);

	printGradeSummary(&s1);


}

//this function accepts a Student structs and prints out
//a summary of their grades.  it returns nothing
void printGradeSummary(struct Student* s)
{
	int i;
	printf("Labs\n");
	for(i = 0;i < NUMLABS;i++){
		printf("\tLab %d: %.2lf\n", i+1, s->labs[i]);
	}
	printf("Quiz\n");
	for(i = 0;i < NUMQUIZ;i++){
		printf("\tQuiz %d: %.2lf\n", i+1, s->quiz[i]);
	}
	printf("Project 1: %.2lf\n", s->project1);
	printf("midterm: %.2lf\n", s->midterm);

}


double average(double data[], int used, int smallestIdx)
{
	int i;
	double rc=0;
	for(i = 0;i < used;i++){
		if (i != smallestIdx){
			rc += data[i];
		}
	}
	rc = rc / (used-1);
	return rc;
}
int smallest(double data[], int used){

	//king... the smallest is currently at array[0]
	int smallestIdx = 0;

	for(i = 1;i < NUMLABS;i++){
		if(data[i] < data[smallestIdx]){
			smallestIdx = i;
		}
	}
	return smallestIdx;
}
































