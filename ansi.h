/********************************************************
 *			ansi.h 				*
 * 	IBM PC ANSI screen and keyboard control 	*
 *							*
 ********************************************************/

#include <stdio.h>

#ifndef ANSI_H
#define ANSI_H

#define ED printf("\033[2J") /* rease display */
#define EL printf("\x1b[K") /* erase line */
#define CUP(row, col) printf("\x1b[%d;%dH", row, col) /* move cursor */
#define CUU printf("\x1b[A") /* cursor move up one row */
#define CUD printf("\x1b[B") /* cursor move down one row */
#define CUF printf("\x1b[C") /* cursor move forward one colon */
#define CUB printf("\x1b[D") /* corsor move backward one col. */

#endif
