/*****************************************
 *		Psignal.c by GUN  	 *
 * 	The program describes signal.h 	 *
 *	siangls functions:  	  	 *
 * SIGABRT, SIGFPE, SIGILL, SIGINT	 *
 * SIGSEGV, SIGTERM.			 *
 * 	signal() and raise()   		 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stddef.h>
#include <signal.h>

void sighandler(int);

int main()
{
	signal(SIGINT, sighandler);
	
	while(1)
	{
		printf("Going to sleep for a second...\n");
		sleep(1);
	}
}
void sighandler(int signum)
{
	printf("Caught signal %d, coming out ....\n", signum);
	exit(1);
}

