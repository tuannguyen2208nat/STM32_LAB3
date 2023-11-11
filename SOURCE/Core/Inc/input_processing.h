/*
 * input_processing.h
 *
 *  Created on: Nov 12, 2023
 *      Author: tuann
 */

#ifndef INPUT_PROCESSING_H
#define INPUT_PROCESSING_H

#include "main.h"

enum ButtonState {
    BUTTON_RELEASED,
    BUTTON_PRESSED,
    BUTTON_PRESSED_MORE_THAN_1_SECOND
};

void fsm_for_input_processing(void);

#endif /* INPUT_PROCESSING_H */

