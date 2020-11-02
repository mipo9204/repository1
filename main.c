#include "msp.h"


/**
 * main.c
 */
void main(void)
{
	WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;		// stop watchdog timer

//attach TX to Echo
//attach RX to Trig

// defines variables for measurement
// variable for the duration of sound wave travel
// variable for the distance measurement
}

//setup for ultra-sonic
void setup() {
  //pinMode(trig, OUTPUT); // Sets TRIG as an OUTPUT
  //pinMode(echo, INPUT); // Sets ECHO as an INPUT
}
//loop for determining distance
void loop() {
  // Clears the trigPin condition
  //digitalWrite(trigPin, LOW);
  //delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  //digitalWrite(trigPin, HIGH);
  //delayMicroseconds(10);
  //digitalWrite(trig, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  //duration = pulseIn(echo, HIGH);
  // Calculating the distance
  //distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
}
//enable interrupts
__enable_interrupt();
//clear interrupts
//port -> I'm actually not sure &= ~interrupt flag name; //clear interrupt flag
