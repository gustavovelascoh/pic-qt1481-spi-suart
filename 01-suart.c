/*h
 * File:   main.c.c
 * Author: guest-7c0578a9-0029-4b56-966f-127d7a1ed50e@transim.com
 *
 * Created on 11/29/2018 11:17:32 AM UTC
 * "Created in MPLAB Xpress"
 */


#include <xc.h>

#define DEBUG_SUART 1 // use 1 or 0 here to enable or disable
#define SUART_BYTE_MODE LSB // Select output mode (LSB or MSB)
#define SUART_TX_PIN LATBbits.LATB5


void main(void) {

    while (1){

        __delay_ms(300);

        suart_out_str("Hola\n",5)
    }
    return;
}
