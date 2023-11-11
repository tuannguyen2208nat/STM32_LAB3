/*
 * software_timer.h
 *
 *  Created on: Nov 10, 2023
 *      Author: tuann
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag ;
extern int timer2_flag ;
extern int timer3_flag ;
extern int timer4_flag ;
extern int timer5_flag ;
extern int timer6_flag ;

void settimer1(int duration);
void settimer2(int duration);
void settimer3(int duration);
void settimer4(int duration);
void settimer5(int duration);
void settimer6(int duration);
void timerrun();


#endif /* INC_SOFTWARE_TIMER_H_ */
