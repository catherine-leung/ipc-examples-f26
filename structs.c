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

int main(void)
{

	struct Student s1 = {
		"Austin",
		123456789,
		{9, 8, 7, 4, 7 , 6},
		{0},
		{0},
		0,
		0,
		"---"
	};
	int i;
	double average = 0;

	//index of smallest element in array
	int smallestIdx = 0;

	//print s1's name and student number in form name - student #
	printf( "%s - %d\n",s1.name, s1.studentNumber );
	printf("please enter this student's midterm grades: ");
	scanf("%lf", &s1.midterm)

	for(i = 1;i < NUMQUIZ;i++){
		if(s1.quiz[i] < s1.quiz[smallestIdx]){
			smallestIdx = i;
		}
	}


	//print out s1's quiz marks and their average
	for(i = 0;i < NUMQUIZ;i++){
		if (i != smallestIdx){
			average += s1.quiz[i];
		}
	}
	printf("Average of quiz marks = %.2lf\n", average/(NUMQUIZ-1));


	for(i = 1;i < NUMLABS;i++){
		if(s1.labs[i] < s1.labs[smallestIdx]){
			smallestIdx = i;
		}
	}


	//print out s1's labs marks and their average
	for(i = 0;i < NUMLABS;i++){
		if (i != smallestIdx){
			average += s1.labs[i];
		}
	}

}


































