/*
 * File:   main.c
 * Author: Gustavo Velasco-Hernandez
 *
 * Created on 11/29/2018 11:17:32 AM UTC
 */

#include <xc.h>
#include "main_cfg.h"
#include "suart.h"


void main(void) {

    OSCCON = 0b01111100;
    trisbbits.trisb5 = 0;

    while (1){

        __delay_ms(300);

        suart_tx_str("Hola\n",5);
    }
    return;
}
