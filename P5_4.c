/*****************************************
 *		P5_4.c by GUN	 	 *
 * 	The program explains: MACRO  	 *
 * 	conditional experssions. 	 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#define SYSTEM IBM-780
#define CPU 80286
#define A 10
#define B 20
#define C 30

int main()
{
	// use #ifdef #else and #endif
	#ifdef SYSTEM
		printf("SYSTEM is defined******* IBM-780 *********\n");
	#else
		printf("SYSTEM is not defined ******* UNIX   **********\n");
	#endif
	#if CPU == 80286
		printf("CPU==80286This machine is IBM-PC\n");
	#else
		printf("This machine is not intel-system\n");
	#endif
	#ifndef CPU
		printf("CPU is not defined---This machine is vax-system\n");
	#else
		printf("CPU is defined---This is IBM machine\n");
	#endif
	#undef B
	#define B 100
	printf("the B = %d\n", B);

}


