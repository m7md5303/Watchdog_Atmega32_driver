/*
 * WATCHDOG_register.h
 *
 *  Created on: 6 Sep 2023
 *      Author: ????
 */

#ifndef WATCHDOG_REGISTER_H_
#define WATCHDOG_REGISTER_H_

#define WDTCR       (*(volatile u8 *)(0x41))
#define WDTOE                 4
#define WDE                   3
#define WDP2                  2
#define WDP1                  1
#define WDP0                  0


#endif /* WATCHDOG_REGISTER_H_ */
