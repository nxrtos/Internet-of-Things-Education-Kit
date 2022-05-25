/*
 * Copyright (c) 2022 Arm Limited and affiliates
 *
 * Please see license at: https://github.com/arm-university/Internet-of-Things-Education-Kit/blob/main/License/LICENSE.md
 */

#include "mbed.h"
#include "platform/mbed_thread.h"


// Blinking rate in milliseconds
#define BLINKING_RATE_MS          250

// Initialise the digital pin LED1 and LED2 as outputs
DigitalOut led1(LED1);
DigitalOut led2(LED2);

// Initialize the user button as interrupt input     
InterruptIn button(USER_BUTTON);

bool toggleLED1=true;
bool toggleLED2=false;

// ISR: executed when interrupt occurs
void pressed(){
	/*your code here*/

}

int main()
{
	// Assign functions to button
		button.fall(&pressed);
  

    while (true) {
	/*your code here*/
        thread_sleep_for(BLINKING_RATE_MS);  //delay 

    }
}
