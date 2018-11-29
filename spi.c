/*
 * File:   spi.c
 * Author: Gustavo Velasco-Hernandez
 *
 * Created on 11/29/2018 3:05:12 PM UTC
 * "Created in MPLAB Xpress"
 */

void spi_init() {}

uint8_t spi_rdwr(uint8_t tx_byte, uint8_t *rx_byte) {
    uint8_t temp;
    temp = SSPBUF;     // Clears BF
    PIR1bits.SSPIF = 0;   // Clear interrupt flag
    SSPCON1bits.WCOL = 0; // Clear any previous write collision
    SSPBUF = tx_byte;    // write byte to SSPBUF register

    if (SSPCON1 & 0x80){   // test if write collision occurred
        temp = 1;        // if WCOL bit is set return 1
    } else {
        while (!PIR1bits.SSPIF);       // wait until bus cycle complete
        temp = 0;

        if (rx_byte)
            rx_byte = SSPBUF;
    }
  return (0);
}
