/*****************************************
 *		P10_11.c by GUN	 	 *
 * 	The program describes 		 *
 *	the usage of the system I/O  	 *
 *	lseek() 			 *
 *	tell()=lseek(fd,0,SEEK_CUR)	 *
 *					 *
 * This is from Wen-Ruey Hwang C book    *
 *****************************************/

#include <stdio.h> 	/* this is for fseek(), ftell() */	
#include <unistd.h>	/* this is for exit() */
#include <fcntl.h>	/* this is for O_RDONLY, O_WRONLY... */

int main()
{
	int fd;

	/* Translated mode */
	fd = open("nltest.dat", O_CREAT|O_WRONLY);
	write(fd, "abc\n", 4);
	close(fd);
	/* Raw mode */
	fd = open("nlrtest.dat", O_CREAT|O_WRONLY|O_TRUNC);
	write(fd, "abc\n", 4);
	close(fd);
}

