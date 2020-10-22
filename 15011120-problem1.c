#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

int main(void){
	pid_t pid;

	if((pid=fork())<0){ //do fork 
		printf("Error in fork\n");
		//print error if fork error happens 
	}
	else if(pid==0){ //child print child's pid and parent's pid
		printf("Child PID is %d, Parent PID is %d\n", getpid(), getppid());
		//using getpid to get pid and ppid to get parent's pid
	}
	else{
		sleep(3); //makes child print first and parent print pid
		printf("Parent PID is %d\n", getpid());
		//using getpid to get pid
	}
	return 0;

}
