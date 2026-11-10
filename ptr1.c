#include <stdio.h>

/* 
This function accepts a time in seconds and determines
how many hours, minutes, seconds are in that time.  It passes the
result back through the pointers hptr , mptr, and sptr respectively. 
The function returns nothing
*/
void getTime(int totalSeconds, int* hptr, int* mptr, int* sptr);
void getTime2(int totalSeconds, int* hptr, int* mptr, int* sptr);
int main(void)
{
	int hours;
	int minutes;
	int seconds;

	//call function and store the results into the locations of
	//the variables hours, minutes, seconds
	getTime(3633, &hours, &minutes, &seconds);

	printf("in main: 3633 seconds is : %02d:%02d:%02d\n", hours, minutes, seconds);

	return 0;
}

void getTime(int totalSeconds, int* hptr, int* mptr, int* sptr)
{
	int hour = totalSeconds / 3600;
	int min = (totalSeconds/3600) / 60;
	int sec = (totalSeconds % 3600) % 60;

	printf("%d seconds is : %02d:%02d:%02d\n",totalSeconds,hour,min, sec);


	* hptr = hour;
	* mptr = min;
	* sptr = sec;
}

void getTime2(int totalSeconds, int* hptr, int* mptr, int* sptr)
{
	*hptr = totalSeconds / 3600;
	*mptr = (totalSeconds/3600) / 60;
	*sptr = (totalSeconds % 3600) % 60;

	printf("%d seconds is : %02d:%02d:%02d\n",totalSeconds,*hptr, *mptr, *sptr);

}

