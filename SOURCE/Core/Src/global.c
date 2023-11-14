/*
 * global.c
 *
 *  Created on: Nov 10, 2023
 *      Author: tuann
 */
#include "global.h"

int status1=0;
int status2=0;
int status3=0;
int status4=0;

int timer1=0;
int timer2=0;
int timer3=0;

void changetimer1(int duration)
{
	timer1=duration;
}

void changetimer2(int duration)
{
	timer2=duration;
}

void changetimer3(int duration)
{
	timer3=duration;
}
