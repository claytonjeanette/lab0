/* 
 * File:   timer.c
 * Author: jeanette
 *
 * Created on August 27, 2015, 3:26 PM
 */

#include <xc.h>

void initTimer1(){
    //TODO: Initialize Timer 1 to have a period of
    // 1 second. Enable its interrupt
    TMR1 = 0;// clear TMR1
    PR1 = 1221*2;// Initialize PR1
    T1CONbits.TCKPS = 3; // Initialize pre-scalar
    T1CONbits.TCS = 0; // Setting the oscillator
    IEC0bits.T1IE = 1;// Enable the interrupt
    IFS0bits.T1IF = 0;// Put the flag down
    IPC1bits.T1IP = 3;// Configure the Interrupt Priority
    T1CONbits.TON = 1;// Turn the timer on
    
}

initTimer2(){
    //TODO: Initialize Timer 2.
   // TMR2 = 0;// clear TMR1
    //PR2 = 1221*2;// Initialize PR1
    //T2CONbits.TCKPS = 3; // Initialize pre-scalar
    //T2CONbits.TCS = 0; // Setting the oscillator
    //IEC0bits.T2IE = 1;// Enable the interrupt
    //IFS1bits.T2IF = 0;// Put the flag down
    //IPC2bits.T2IP = 3;// Configure the Interrupt Priority
    //T2CONbits.TON = 1;// Turn the timer on
}

delayMs(int delay){
    //TODO: Using timer 2, create a delay
    // that is delay amount of ms.
}