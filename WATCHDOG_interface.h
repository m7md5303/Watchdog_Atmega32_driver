/*
 * WATCHDOG_interface.h
 *
 *  Created on: 6 Sep 2023
 *      Author: ????
 */

#ifndef WATCHDOG_INTERFACE_H_
#define WATCHDOG_INTERFACE_H_

void WATCHDOG_voidEnable(void);
void WATCHDOG_voidDisable(void);
void WATCHDOG_u8SetTimerPrescalar(u8 Copy_u8PreScalarValue);
#define TIME16_3MS          0 //FOR 16.3 m sec//
#define TIME32_5MS          1 //FOR 32.5 m sec//
#define TIME65MS            2 //FOR 65   m sec//
#define TIME0_13S           3 //FOR 0.13   sec//
#define TIME0_26S           4 //FOR 0.26   sec//
#define TIME0_52S           5 //FOR 0.52   sec//
#define TIME1_0S            6 //FOR 1      sec//
#define TIME2_1S            7 //FOR 2.1    sec//

#endif /* WATCHDOG_INTERFACE_H_ */
