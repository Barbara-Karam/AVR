/*
 * KPD_main.c
 *
 *  Created on: Sep 10, 2022
 *      Author: brbar
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#define CPU 8000000UL
#include <util/delay.h>

#include"DIO_interface.h"

#include "LCD_interface.h"
#include "KPD_interface.h"
#include "KPD_config.h"
#include "KPD_private.h"

int main()
{
	u8 Local_variable;
	DIO_Init();
	LCD_voidInit();
	 while(1)
	 {
	KPD_u8GetKey(& Local_variable);
	if (Local_variable != 0xFF)
	{
    LCD_voidSendChar(Local_variable);
	}
	 }


	return 0;
}

