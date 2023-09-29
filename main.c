/*
 * main.c
 *
 *  Created on: 6 Sep 2023
 *      Author: ????
 */


#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "WATCHDOG_interface.h"


int main(void){
	WATCHDOG_u8SetTimerPrescalar(TIME1_0S);
	WATCHDOG_voidEnable();
	DIO_voidSetPinDirection(DIO_u8PORTB , 0 , DIO_u8OUTPUT);
	DIO_voidSetPinValue(DIO_u8PORTB , 0 , DIO_u8HIGH);
    WATCHDOG_voidDisable();
	while(1){

	}
}
