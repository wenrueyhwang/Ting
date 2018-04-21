#ifndef DEFINES_H
#define DEFINES_H

#ifndef NULL
	#define NULL (void *)0
#endif

#define EOM 0
#define FOREVER while(TRUE)

typedef int Boolean;
typedef unsigned int WORD;
typedef unsigned char BYTE;

enum {FALSE, TRUE};
enum {OFF, ON};
enum {NO, YES};
enum {FAST, SLOW};

enum errors
{
	SEMAPHORE,
	SERIAL,
	TIMER,
	DELAY,
	PWM
};
enum edges
{
	DISABLE,
	RISING,
	FALLING,
	ANY
};
enum outputs
{
	DISCONNECT,
	TOGGLE,
	CLEAR,
	SET
};

#endif


