#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC = 0x01;
	while(1)
	{
		// LED ON
		PORTC = 0b00000001;
		_delay_ms(500);

		// LED OFF
		PORTC = 0b00000000;
		_delay_ms(500);
	}
}


