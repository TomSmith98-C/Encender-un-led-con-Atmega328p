/*
 * Encender un led.cpp
 *
 * Created: 05/04/2021 07:35:31 p.m.
 * Author : Tom
 */ 

/*
	Description
	This project will turn a led on and off for 1 second.
*/

#define F_CPU 16000000L
#include <avr/delay.h>
#include <avr/io.h>

	
int main(void)
{
	DDRC  |=  (1<<DDC0);	//  PC0 AS OUTPUT  
	
	while (1) 
    {
		PORTC |= (1<<PORTC0);		
		_delay_ms(1000); 
		PORTC &=~ (1<<PORTC0);
		_delay_ms(1000); 
    }
}

