/*	Author: Adrian Ramirez
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #2  Exercise #1
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
	DDRB = 0xFF; PORTB = 0x00; // Configure port B's 8 pins as outputs		// Initialize output on PORTB to 0x00
	unsigned char firstInput = 0x00;
	unsigned char secondInput = 0x00;
    /* Insert your solution below */
    while (1) {
	firstInput = PINA & 0x01;
	secondInput = PINA & 0x02;
	if((firstInput == 0x01) && (secondInput == 0x00)){
		PORTB = 0x01;
	}
	else{
		PORTB = 0x00;
	}
	}
    return 1;
} 

