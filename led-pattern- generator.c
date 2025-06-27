#define _XTAL_FREQ 4000000
#include <xc.h>

#pragma config FOSC = HS     
#pragma config WDTE = OFF    
#pragma config PWRTE = OFF
#pragma config BOREN = OFF
#pragma config LVP = OFF
#pragma config CPD = OFF
#pragma config WRT = OFF
#pragma config CP = OFF

void main() {
    TRISB = 0x00; 
    PORTB= 0x01;   

    while (1) {

        for (int i = 0; i < 7; i++) {
            __delay_ms(200);
            PORTB = PORTB << 1;
        }


        for (int i = 0; i < 7; i++) {
            __delay_ms(200);
            PORTB = PORTB >> 1;
        }
    }
}
