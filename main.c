//Timer A interrupt triggers ultrasonic
#include "msp.h"
#include <stdint.h>

//set variables for distance calculation
int miliseconds = 0;
int distance = 0;

//send distance command to sensor
    //receive raw data from ultrasonic
    //do calculation to convert to (whatever metric of measurement we're using)

//get distance back
    //get modified distance from distance command

//check results
    //compare to set #

//in a loop (if object distance is below a certain #)
    //avoid function

//clear interrupt flag

//cycle back to moving state

//IRQ handlers
void TA0_0_IRQHandler(void)
{
    //    Interrupt gets triggered for every clock cycle in SMCLK Mode counting number of pulses
    miliseconds++;
    TIMER_A0->CCTL[0] &= ~TIMER_A_CCTLN_CCIFG;
}
