/*
 * File:   suart.c
 * Author: Gustavo Velasco-Hernandez
 *
 * Created on 11/29/2018 10:55:23 AM UTC
 */

 #include "suart.h"


 void suart_tx_char(uint8_t character) {

     uint8_t i = 0;
     SUART_TX_PIN = 1; // MSB
     ISYM_DELAY;
     SUART_TX_PIN = 0; // START
     SUART_BIT_DELAY;
     for (i = 8; i > 0; --i) {
         // Bit order determines how you will put the bits, from
         // left to right (MSB) or right to left (LSB)
     #if SUART_BYTE_MODE == MSB

         // in MSB you compare the left-most bit
         // doing an AND with 0x80, and put 1 if
         // true, 0 elsewhere.
         SUART_TX_PIN = (character & 0x80) ? 1 : 0;
         // Shift the character to the left, discrading the bit just sent
         character <<= 1;
     #elif SUART_BYTE_MODE == LSB
         // in LSB you compare the right-most bit doing
         // an AND with 0x01, and put 1 if true, 0 else.
         SUART_TX_PIN = (character & 0x01);
         // Shift the character to the right, discrading the bit just sent
         character >>= 1;
     #elif
         #error "INVALID SUART_BYTE_MODE"
     #endif
         SUART_BIT_DELAY;
     }
     SUART_TX_PIN = 1; // STOP
 }

 void suart_tx_str(char * string string, uint8_t len) {
     uint8_t i = 0;
     for (i = 0; i < len; i++) {
         suart_tx_char(string[i]);
     }
 }
