#include <stdio.h>

//this program will write hello world! into the file named hello.txt
int main(void)
{
	//Create a file handle that is associated with hello.txt
	//in C, the data type for a file handle is FILE*
	//to associate a file, we use fopen() function
	//fopen wants the name of a file which is a null terminated string
	//and the "mode" for interaction.  
	//	"w" - write - create if not existing, overwrite if existing
	//  "r" - read
	//  "a" - append - create if not existing, add to end if existing

	FILE* handle = fopen("hello.txt", "w");

	//write hello world into the file
	fprintf(handle, "hello world!\n");

	//close file
	fclose(handle);

}