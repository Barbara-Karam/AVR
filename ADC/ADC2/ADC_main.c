/*
 * ADC_main.c
 *
 *  Created on: Sep 19, 2022
 *      Author: brbar
 */
/* include LIB */
#include "STD_TYPES.h"
#include "BIT_MATH.h"


/* Include Driver Files */
#include "ADC_interface.h"
#include "ADC_private.h"
#include "ADC_config.h"

//MCAL
#include"DIO_interface.h"
//HAL
#include"LCD_interface.h"

int main()
{
	u16 Local_u16Digital,Local_u16AnalogValue;
	DIO_Init();
	ADC_voidInit();

	while(1)
	{
		//read digital value
		ADC_u8GetDigitalValue(ADC_u8_CHANNEL_0,&Local_u16Digital);
		//get analog value
		Local_u16AnalogValue=(Local_u16Digital*5000UL)/1024;
		//turning on LED
		if (Local_u16AnalogValue<=1500)
		{
			DIO_u8SetPinValue(DIO_u8_PORTC,DIO_u8_PIN0,DIO_u8_HIGH);
			DIO_u8SetPinValue(DIO_u8_PORTC,DIO_u8_PIN1,DIO_u8_LOW);
			DIO_u8SetPinValue(DIO_u8_PORTC,DIO_u8_PIN2,DIO_u8_LOW);
		}
		else if ((1500<Local_u16AnalogValue)&&(Local_u16AnalogValue<=3000))
		{
			DIO_u8SetPinValue(DIO_u8_PORTC,DIO_u8_PIN1,DIO_u8_HIGH);
			DIO_u8SetPinValue(DIO_u8_PORTC,DIO_u8_PIN0,DIO_u8_LOW);
			DIO_u8SetPinValue(DIO_u8_PORTC,DIO_u8_PIN2,DIO_u8_LOW);
		}
		else if ((3000<Local_u16AnalogValue)&&(Local_u16AnalogValue<=5000))
		{
			DIO_u8SetPinValue(DIO_u8_PORTC,DIO_u8_PIN2,DIO_u8_HIGH);
			DIO_u8SetPinValue(DIO_u8_PORTC,DIO_u8_PIN0,DIO_u8_LOW);
			DIO_u8SetPinValue(DIO_u8_PORTC,DIO_u8_PIN1,DIO_u8_LOW);
		}
	}

	return 0;
}

