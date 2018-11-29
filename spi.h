/*
 * File:   spi.h
 * Author: Gustavo Velasco-Hernandez
 *
 * Created on 11/29/2018 3:02:22 PM UTC
 * "Created in MPLAB Xpress"
 */

#ifndef SPI_H
#define	SPI_H

#include <stdint.h>

#define SCK_TRIS TRISCbits.TRISC3 = 0;
#define SDO_TRIS TRISCbits.TRISC5 = 0;
#define SDI_TRIS TRISCbits.TRISC4 = 1;

void spi_init(void);
uint8_t spi_rdwr(uint8_t tx_byte, uint8_t * rx_byte);


#endif	/* SPI_H */
