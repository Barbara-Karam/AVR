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
int main()
{
    DIO_Init();
	LCD_voidInit();

 while(1)
 {
	    LCD_voidSendString("Hello World");
	 	_delay_ms(500);
	 	LCD_voidClear();
	 	LCD_voidSendString("I`m Barbara");
	 	_delay_ms(500);
	 	LCD_voidClear();
 }
 return 0;
}


