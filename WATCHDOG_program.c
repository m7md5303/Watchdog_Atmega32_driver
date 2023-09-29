/*
 * WATCHDOG_program.c
 *
 *  Created on: 6 Sep 2023
 *      Author: ????
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "WATCHDOG_register.h"
#include "WATCHDOG_private.h"
#include "WATCHDOG_interface.h"
#include "WATCHDOG_config.h"


void WATCHDOG_voidEnable(void){
SET_BIT(WDTCR, WDE);
}
void WATCHDOG_voidDisable(void){
WDTCR=0b00011000;
WDTCR=0;

}
void WATCHDOG_u8SetTimerPrescalar(u8 Copy_u8PreScalarValue){

	WDTCR &=0b11111000;
	WDTCR |=Copy_u8PreScalarValue;
}
