/*****************************************
 *		P6_5.c by GUN	 	 *
 * 	The program shows		 *
 *	(while break/continue statment)	 *
 *	computes the average of an 	 *
 *	arbitrary set of positive number *
 *	A sentinel(flag) is used to END. *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#define END 99

int main()
{
	static int counter, i;
	static float average, number[10], total;

	printf("Please input data set = ");
	while(1)
	{
		scanf("%f", &number[counter]);
		if(number[counter] < 0) continue;
		if(number[counter] == END) break;
		total += number[counter];
		counter++;
		// printf("total %f, counter %d", total, counter);
	}
	average = total / counter;
	printf("The input positive numbers are: ");
	while(i < counter)
	{
		printf("%5.1f", number[i]);
		i++;
	}
	printf("\nThe average is %6.3f\n", average);
}



