
/*
 * switches1.c
 *
 *  Created on: Aug 30, 2022
 *      Author: brbar
 */

#include <avr/io.h>
#include <util/delay.h>
int main()
{
DDRD=0b00000000;
PORTD=0b11111111;
DDRA=0b00000000;
PORTA=0b00000000;

DDRC=0b11111111;
DDRB=0b11111111;

while(1)
{
	if((PIND&1)==0){_delay_ms(80);PORTC=0b11111111;}

	else{_delay_ms(50);PORTC=0b00000000;}
	if((PINA>>4)==0){_delay_ms(80);PORTB=0b11111111;}
	else{_delay_ms(50);PORTB=0b00000000;}
}
}
