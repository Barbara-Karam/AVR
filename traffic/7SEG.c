
#include <avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>
#define ZERO   0b00111111
#define ONE    0b00000110
#define TWO    0b01011011
#define THREE  0b01001111
#define FOUR   0b01100110
#define FIVE   0b01101101
#define SIX    0b01111101
#define SEVEN  0b00000111
#define EIGHT  0b01111111
#define NINE   0b01101111

int main()
{
	DDRA=0b11111111;
	DDRB=0b11111111;
	DDRC=0b11111111;

	while(1)
	{
	PORTC=0b00000001;
	PORTB=ONE;PORTA=ZERO;
	_delay_ms(100);
	PORTB=0b00000000;PORTA=NINE;
	_delay_ms(100);
	PORTA=EIGHT;
	_delay_ms(100);
	PORTA=SEVEN;
	_delay_ms(100);
	PORTA=SIX;
	_delay_ms(100);
	PORTA=FIVE;
	_delay_ms(100);
	PORTA=FOUR;
	_delay_ms(100);
	PORTA=THREE;
	_delay_ms(100);
	PORTA=TWO;
	_delay_ms(100);
	PORTA=ONE;
	_delay_ms(100);
	PORTA=ZERO;
	_delay_ms(100);
	PORTC=0b00000010;
	_delay_ms(100);
	PORTA=THREE;
	_delay_ms(100);
	PORTA=TWO;
	_delay_ms(100);
	PORTA=ONE;
	_delay_ms(100);
	PORTA=ZERO;
	_delay_ms(100);
	PORTC=0b00000100;
	PORTB=ONE;PORTA=ZERO;
	_delay_ms(100);
	PORTB=0b00000000;PORTA=NINE;
	_delay_ms(100);
	PORTA=EIGHT;
	_delay_ms(100);
	PORTA=SEVEN;
	_delay_ms(100);
	PORTA=SIX;
	_delay_ms(100);
	PORTA=FIVE;
	_delay_ms(100);
	PORTA=FOUR;
	_delay_ms(100);
	PORTA=THREE;
	_delay_ms(100);
	PORTA=TWO;
	_delay_ms(100);
	PORTA=ONE;
	_delay_ms(100);
	PORTA=ZERO;
	_delay_ms(100);

	}
	return 0;
}

