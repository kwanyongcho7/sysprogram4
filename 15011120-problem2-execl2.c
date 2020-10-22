#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>



int main(){
	
	printf("execl() function execution\n"); //print message
	execl("/bin/ls", "ls", "-l", NULL); //do execl ls -l
	printf("Error"); //print error if execl not working correctly

	return 0;
}
