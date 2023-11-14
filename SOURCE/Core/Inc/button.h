/*
 * button.h
 *
 *  Created on: Nov 12, 2023
 *      Author: tuann
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#include "global.h"
#include "button1.h"
#include "button2.h"
#include "button3.h"
#include "fsm_auto.h"
#include "traffic_light_display1.h"
#include "traffic_light_display2.h"

#define normal_state GPIO_PIN_SET
#define pressed_state GPIO_PIN_RESET

void getkeyinput();
int CHECKCO();
#endif /* INC_BUTTON_H_ */
