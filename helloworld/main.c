#include <xc.h>

#define _XTAL_FREQ 4000000

#pragma config WDTE=OFF, PWRTE=OFF, MCLRE=ON, CP=OFF, CPD=OFF, BOREN=OFF, IESO=OFF, FCMEN=OFF

//Define the LED port states.
#define LED	    PORTBbits.RB7
#define LED_TRIS    TRISBbits.TRISB7

int main()
{
    TRISA = 0xFF; //make everything DI 
    TRISB = 0xFF; //make everything DI 
    TRISC = 0xFF; //make everything DI 

 //  ANSEL = 0x00; //disable analog inputs
 //  ANSELH = 0x00;

    //TRISBbits.TRISB7 = 0; //make the LED pin an output //debug changed to tomorrow.

    LED_TRIS = 0; //Make the LED pin an output

    while(1)
    {
        LED = 1;            //Flash the LED
        __delay_ms(500);
        LED = 0;
        __delay_ms(500);
     }
    return 0;
}