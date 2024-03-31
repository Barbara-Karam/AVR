/*
 * main.c
 *
 *  Created on: Sep 4, 2022
 *      Author: brbar
 */
//lib
#define CPU 8000000UL
#include <util/delay.h>
#include "STD_TYPES.h"
#include"BIT_MATH.h"

//mcal
#include"DIO_interface.h"

//hal
#include "LCD_interface.h"
#include "LCD_config.h"
#include "LCD_private.h"

u8 array[8]=
{
		0b00000,
		0b00000,
		0b00101,
		0b11111,
		0b10100,
		0b00100,
		0b01010,
		0b01010
};

u8 array2[8]=
{
		0b00000,
		0b00000,
		0b10100,
		0b11111,
		0b00101,
		0b00100,
		0b01010,
		0b01010
};
int main()
{

	DIO_Init();
	LCD_voidInit();
	LCD_voidSendCmd(0b00001100);
	int i=0,j=0,flag=0;
	while(1)
	{

		LCD_voidSendSpecialChar(0,array,j,i);
		_delay_ms(200);
		LCD_voidClear();
		_delay_ms(5);
		LCD_voidSendSpecialChar(0,array2,j,++i);
		_delay_ms(200);
		LCD_voidClear();
		_delay_ms(5);
		i++;
        if (i==16)
        	{j++;i=0;flag++;}
        if (flag==2) {flag=0;j=0;continue;}
	}
	return 0;
}


