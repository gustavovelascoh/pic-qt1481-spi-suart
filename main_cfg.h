/*
 * File:   main_cfg.h
 * Author: Gustavo Velasco-Hernandez
 *
 * Created on 11/29/2018 11:33:45 AM UTC
 * "Created in MPLAB Xpress"
 */

#ifndef MAIN_CFG_H
#define	MAIN_CFG_H

#include <xc.h>

#define BAUDRATE 9600
#define SUART_BYTE_MODE LSB // Select output mode (LSB or MSB)
#define SUART_TX_PIN LATBbits.LATB5

#define _XTAL_FREQ 16000000

// PIC configuration code
#pragma config RETEN = ON
#pragma config INTOSCSEL = HIGH
#pragma config SOSCSEL = HIGH
#pragma config XINST = OFF
#pragma config FOSC = HS1
#pragma config PLLCFG = OFF
#pragma config FCMEN = OFF
#pragma config IESO = OFF
#pragma config PWRTEN = ON
#pragma config BOREN = OFF
#pragma config BORV = 0
#pragma config BORPWR = HIGH
#pragma config WDTEN = NOSLP
#pragma config WDTPS = 512
#pragma config CANMX = PORTC
#pragma config MSSPMSK = MSK7
#pragma config MCLRE = ON
#pragma config STVREN = ON
#pragma config BBSIZ = BB2K
#pragma config CP0 = ON
#pragma config CP1 = ON
#pragma config CP2 = ON
#pragma config CP3 = ON
#pragma config CPB = ON
#pragma config CPD = OFF
#pragma config WRT0 = OFF
#pragma config WRT1 = OFF
#pragma config WRT2 = OFF
#pragma config WRT3 = OFF
#pragma config WRTC = OFF
#pragma config WRTB = OFF
#pragma config WRTD = OFF
#pragma config EBTR0 = ON
#pragma config EBTR1 = ON
#pragma config EBTR2 = ON
#pragma config EBTR3 = ON
#pragma config EBTRB = ON

#endif	/* MAIN_CFG_H */
