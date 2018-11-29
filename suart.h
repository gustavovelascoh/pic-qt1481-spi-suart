/*
 * File:   suart.h
 * Author: Gustavo Velasco-Hernandez
 *
  * Created on 11/29/2018 10:55:51 AM UTC
 */

 #ifndef SUART_H
 #define	SUART_H

 #include <stdint.h>
 #include "main_cfg.h"

 #define MSB 1
 #define LSB 0

 /* Usage Example */
 // #define DEBUG_SUART 1 // use 1 or 0 here to enable or disable
 // #define SUART_BYTE_MODE LSB // Select output mode (LSB or MSB)
 // #define SUART_TX_PIN <YOUR_PIN> // ex. LATBbits.LATB5
 // #define BAUDRATE <value> // any of <9600|38400|115200>


 #if BAUDRATE == 9600
 #define BIT_TIME_US 104
 #define ISYM_DELAY __delay_ms(1)
 #elif BAUDRATE == 38400
 #define BIT_TIME_US 26
 #define ISYM_DELAY __delay_us(200)
 #elif BAUDRATE == 115200
 #define BIT_TIME_US 9
 #define ISYM_DELAY __delay_us(90)
 #else
 #error "Invalid BAUDRATE definition"
 #endif

 #define SUART_BIT_DELAY __delay_us(BIT_TIME_US)

 void suart_tx_str(char * string, uint8_t len);

 #endif	/* SUART_H */
