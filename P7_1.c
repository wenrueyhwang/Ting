/*****************************************
 *		P7_1.c by GUN	 	 *
 * 	The program exercises		 *
 *	array and struct		 *
 *					 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/
#include <stdio.h>
#define MAX 5
struct RECODE
{
	unsigned number;
	float chinese;
	float math;
	float program;
};

int main()
{
	int i, ch;
	struct RECODE student[MAX];

	printf("Please input the RECODE data:\n");
	for(i=0; i< MAX; i++)
	{
		printf("student[%d]", i+1);
		scanf("%u", &student[i].number);
		scanf("%f", &student[i].chinese);
		scanf("%f", &student[i].math);
		scanf("%f", &student[i].program);
	}
	getchar(); // This is for return key
	while(1)
	{
		printf("Please choose the index of the student recode:");
		ch = getchar() - '1';
		if(ch >=0 && ch < 5)
		{
			printf("the student[%d] is:\n", ch+1);
			printf("\t number\t\t= %u\n", student[ch].number);
			printf("\t chinese\t= %6.1f\n", student[ch].chinese);
			printf("\t math\t\t= %6.1f\n", student[ch].math);
			printf("\t program\t= %6.1f\n", student[ch].program);
			printf("====================================\n");
			getchar();
			continue;
		}
		break;
	}
}

	


