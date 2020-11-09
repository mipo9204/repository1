int meas1 = 0;
int meas2 = 0;
int meas1Count=0;
int takeVal=0;

int main(void){
    /* Stop watchdog timer */
    MAP_WDT_A_holdTimer();

    CS_setDCOCenteredFrequency(CS_DCO_FREQUENCY_24);                    // 24000000 Hz

    CS_initClockSignal(CS_MCLK,  CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_1); // 24000000 Hz
    CS_initClockSignal(CS_SMCLK, CS_DCOCLK_SELECT, CS_CLOCK_DIVIDER_8); //  3000000 Hz

    //Configure P2.4 as peripheral input (capture)
    //GPIO_setAsPeripheralModuleFunctionInputPin
    //GPIO_setAsOutputPin

    //Configuring Capture Mode

    //Configuring Continuous Mode

    /* Enabling interrupts */
    Interrupt_enableInterrupt(INT_TA0_N);
    Interrupt_enableMaster();

    /* Starting the Timer32 */
    //Timer32_initModule(TIMER32_0_BASE, TIMER32_PRESCALER_1, TIMER32_32BIT, TIMER32_PERIODIC_MODE);
    //Timer32_disableInterrupt(TIMER32_0_BASE);
    //Timer32_setCount(TIMER32_0_BASE, 1);
    //Timer32_startTimer(TIMER32_0_BASE, true);

    /* Starting the Timer_A0 in continuous mode */
    //Timer_A_startCounter(TIMER_A0_BASE, TIMER_A_CONTINUOUS_MODE);
    
    while(1)
    {
        //GPIO_setOutputHighOnPin
        //Timer32_setCount
        
        while (Timer32_getValue(//something) > 0); // Wait 10us
        //GPIO_setOutputLowOnPin
        // delay for a half-second.

        if (takeVal==1){
            takeVal=0;
            int diff=((meas2-meas1)&0xFFFF);
            int distCM=(diff/3)/58;
            printf("Distance: %i cm \n",distCM);
            if(distCM < 20){
                //call avoid function
                }
            }
       }
}

void TA0_N_IRQHandler(void)
{
    int rising  = 0;

    //Timer_A_clearCaptureCompareInterrupt(TIMER_A0_BASE, TIMER_A_CAPTURECOMPARE_REGISTER_1);

    if(P2IN&0x10) rising=1; else rising=0;

    if(rising) // Start
    {
        meas1 =//Timer_A_getCaptureCompareCount
        meas1Count=1;
    }
    else
    {
        meas2 = //Timer_A_getCaptureCompareCount
        if (meas1Count==1){ //if meas1 has been collected
            meas1Count=0; //reset meas1 count
            takeVal=1; //flag for conversion
        }
    }
}

