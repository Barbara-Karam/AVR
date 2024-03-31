#include <avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>

void zig_zag (void)
{
	PORTA=0b01010101;
	_delay_ms(100);
	PORTA=0b10101010;
	_delay_ms(100);
}
void incrementing(void)
{
	PORTA=0b00000001;
	_delay_ms(20);
	PORTA=0b00000011;
	_delay_ms(20);
	PORTA=0b00000111;
	_delay_ms(20);
	PORTA=0b00001111;
	_delay_ms(20);
	PORTA=0b00011111;
	_delay_ms(20);
	PORTA=0b00111111;
	_delay_ms(20);
	PORTA=0b01111111;
	_delay_ms(20);
	PORTA=0b11111111;
	_delay_ms(20);
	PORTA=0b01111111;
	_delay_ms(20);
	PORTA=0b00111111;
	_delay_ms(20);
	PORTA=0b00011111;
	_delay_ms(20);
	PORTA=0b00001111;
	_delay_ms(20);
	PORTA=0b00000111;
	_delay_ms(20);
	PORTA=0b00000011;
	_delay_ms(20);
	PORTA=0b00000001;
	_delay_ms(20);
	PORTA=0b00000000;
	_delay_ms(20);
}
void flashing(void)
{
	PORTA=0b11111111;
	_delay_ms(100);
	PORTA=0b00000000;
	_delay_ms(100);
}
