/*
 * File:   main.c
 * Author: Gustavo Velasco-Hernandez
 *
 * Created on 11/29/2018 11:17:32 AM UTC
 */

#include <xc.h>
#include "main_cfg.h"
#include "suart.h"
#include "spi.h"

uint8_t spi_rx_byte = 0x00;

void main(void) {

    WPUB = 0x00;
    INTCON2bits.nRBPU = 1;
    OSCCON = 0x7C;
    TRISBbits.TRISB5 = 0;

    spi_init();

    while (1){

        __delay_ms(300);

        spi_rdwr(0x0F, &spi_rx_byte);

        suart_tx_str("SPI RDWR\n", 9);

    }
    return;
}
