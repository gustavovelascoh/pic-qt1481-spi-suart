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

#define DEBUG_SUART 1 // use 1 or 0 here to enable or disable
#define BAUDRATE 9600
#define SUART_BYTE_MODE LSB // Select output mode (LSB or MSB)
#define SUART_TX_PIN LATBbits.LATB5

#define _XTAL_FREQ 16000000

#endif	/* MAIN_CFG_H */
