/*****************************************
 *		P10_10.c by GUN	 	 *
 * 	The program describes 		 *
 *	the usage of the system I/O  	 *
 *		lseek() and tell()	 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h> 	/* this is for fseek(), ftell() */	
#include <stdlib.h>	/* this is for exit() */
#include <fcntl.h>	/* this is for O_RDONLY, O_WRONLY... */

#define tell(fd) (int)lseek(fd, 0, SEEK_CUR)

int main()
{
	int fd, size;
	char block[512];
	char filename[] = "d10.dat";

	if((fd = open(filename, O_RDONLY)) == EOF)
	{
		printf("Cannot open file %s\n",filename );
		exit(-1);
	}
	
	printf("\n(NOW) the position is (%d)\n", tell(fd) ); 
/**** to position on the first byte: ***********/
	printf("*** jump first 10 bytes and list 20.");
	lseek(fd, 10, SEEK_SET);
	printf("\n(NOW) position is (%d)\n", tell(fd));
	size = read(fd, block, 20);
	write(1, block, size);
	printf("\n(NOW) the positon is (%d)\n", tell(fd)); 
/***** to position now : *******/
	printf("*** list from current to 20 byte:\n");
	lseek(fd, 0, SEEK_CUR);
	size = read(fd, block, 20);
	write(1, block, size);
	printf("\n(NOW) the position is (%d)\n", tell(fd)); 
/**** to position on the last byte. ******/
	printf("*** list from end to -10:\n");
	lseek(fd, -10, SEEK_END);
	printf("(NOW) position is (%d)\n", tell(fd)); 
	size = read(fd, block, 10);
	write(1, block, size);
	close(fd);
}

