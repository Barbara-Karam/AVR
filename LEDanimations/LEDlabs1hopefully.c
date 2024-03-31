/*
 * LEDlabs1hopefully.c
 *
 *  Created on: Sep 2, 2022
 *      Author: brbar
 */
#include <avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>

#include "LED_interface.h"
int main()
{
	int i;
	DDRA=0b11111111;

	while(1)
	{
		i=0;
	 while(i<5)
		{
		 zig_zag ();
		 i++;
		}
	 PORTA=0b00000000;
	 _delay_ms(500);
	 while(i<10)
			{
		 incrementing();
			 i++;
			}
	  _delay_ms(480);
	  while(i<15)
	  			{
		  flashing();
	  		 i++;
	  			}
	 _delay_ms(400);
	
	}
}

