/*
 * File:   main.c
 * Author: rlopezxl
 *
 * Created on June 6, 2019, 1:17 AM
 */

#define F_CPU 1200000UL

#include <avr/io.h>
#include <util/delay.h>

#define	GREEN_PIN	PB0
#define YELLOW_PIN  PB1
#define RED_PIN PB2

int main(void) {
    DDRB = 0b00000111;
    PORTB = 0b00000000;
    
    while (1) {
        PORTB = (1 << GREEN_PIN);
        _delay_ms(30000);
        PORTB = (1 << YELLOW_PIN);
        _delay_ms(10000);
        PORTB= (1 << RED_PIN);
        _delay_ms(15000);
    }
}
