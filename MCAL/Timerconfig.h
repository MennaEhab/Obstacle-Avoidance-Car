/*
* Timerconfig.h
*
* Created: 2/17/2020 1:26:17 PM
*  Author: Menna
*/


#ifndef TIMERCONFIG_H_
#define TIMERCONFIG_H_

/*      TIMER 0   */

#define T0_NORMAL_MODE_MASK 0
#define T0_COMP_MODE_MASK 0x08


#define		TIMER0_POLLING_MODE_MASK 		0
#define		TIMER0_INTERRUPT_NORMAL_MASK		0x01


#define		TIMER0_NO_CLOCK_MASK				0xF8
#define		TIMER0_PRESCALER_NO_MASK			0x01
#define		TIMER0_PRESCALER_8_MASK				0x02
#define		TIMER0_PRESCALER_64_MASK			0x03
#define		TIMER0_PRESCALER_256_MASK			0x04
#define		TIMER0_PRESCALER_1024_MASK			0x05

//#define		TIMER_MODE_MASK				0
#define		COUNTER_FALLING_MODE_MASK				0x06
#define		COUNTER_RISING_MODE_MASK				0x07

#define  T0_OVF_FLAG_MASK  0x01


/*      TIMER 1   */

#define T1_NORMAL_MODE_MASK 0x0000
#define T1_COMP_MODE_MASK 0x0008

#define		TIMER1_POLLING_MODE_MASK 		0
#define		TIMER1_INTERRUPT_NORMAL_MASK		0x04

#define		TIMER1_NO_CLOCK_MASK				0xFFF8
#define		TIMER1_PRESCALER_NO_MASK			0x0001
#define		TIMER1_PRESCALER_8_MASK				0x0002
#define		TIMER1_PRESCALER_64_MASK			0x0003
#define		TIMER1_PRESCALER_256_MASK			0x0004
#define		TIMER1_PRESCALER_1024_MASK			0x0005

#define  T1_OVF_FLAG_MASK  0x04


/*         TIMER 2          */


#define T2_NORMAL_MODE_MASK 0
#define T2_COMP_MODE_MASK 0x08


#define		TIMER2_POLLING_MODE_MASK 		0
#define		TIMER2_INTERRUPT_NORMAL_MASK		0x40
#define		TIMER2_INTERRUPT_COMPARE_MASK		0x80


#define		TIMER2_NO_CLOCK_MASK				0xF8
#define		TIMER2_PRESCALER_NO_MASK			0x01
#define		TIMER2_PRESCALER_8_MASK				0x02

#define		TIMER2_PRESCALER_32_MASK			0x03
#define		TIMER2_PRESCALER_64_MASK			0x04
#define		TIMER2_PRESCALER_128_MASK			0x05
#define		TIMER2_PRESCALER_256_MASK			0x06
#define		TIMER2_PRESCALER_1024_MASK			0x07

#define  T2_OVF_FLAG_MASK  0x40


// OC

#define  T2_OC2_DIS 0
#define T2_OC2_TOGGLE 0x10
#define T2_OC2_CLEAR 0x20
#define T2_OC2_SET 0x30


#endif /* TIMERCONFIG_H_ */
