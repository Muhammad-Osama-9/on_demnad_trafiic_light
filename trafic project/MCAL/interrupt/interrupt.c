/*
 * interrupt.c
 *
 * Created: 11/11/2022 3:28:39 PM
 *  Author: engmu
 */ 
#include "interrupt.h"
void enable_global_interrupts()
{
	SET_BIT(SREG,7);  // set 7 bit to which responsible for interrupts
	 
}
void button_interrupt()
{
	SET_BIT(MCUCR,0);
	SET_BIT(MCUCR,1) ;
	
	SET_BIT(GICR,6) ; // activate INT_0 ; 
}