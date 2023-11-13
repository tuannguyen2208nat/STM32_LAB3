/*
 * global.h
 *
 *  Created on: Nov 10, 2023
 *      Author: tuann
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "software_timer.h"

#define INIT 0
#define auto_red 1
#define auto_green 2
#define auto_yellow 3

extern int status1;
extern int status2;
extern int status3;
extern int status4;

extern int timer1;
extern int timer2;
extern int timer3;

void changetimer1(int duration);
void changetimer2(int duration);
void changetimer3(int duration);

#endif /* INC_GLOBAL_H_ */
