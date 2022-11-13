/*
 * timer.c
 *
 * Created: 11/11/2022 3:29:12 PM
 *  Author: engmu
 */ 
#include "timer.h"
void d_elay_s (float t_sec)
{
	uint16 N = (int) t_sec / 0.2621 ; 
	TCCR0 = 0x00 ; // initi 
	TCNT0 = 0; 
	TCCR0 = 0x05; // 1024 prescaller - START Timer
	while (N--)
	{
		
	    	while (!(GET_BIT(TIFR,0))) ; 
	
	           SET_BIT(TIFR,0) ; // remove FLag 
	}
	
}
void d_elay_ms (float t_msec)
{
	uint16 N = (int)t_msec / 16.384 ;
	TCCR0 = 0x00 ; // initi
	TCNT0 = (int)(t_msec / 0.064 ) / N ;
	TCCR0 = 0x03; // 64 prescaller - START Timer
	while (N--)
	{
		
		while (!(GET_BIT(TIFR,0))) ;
		
		SET_BIT(TIFR,0) ; // remove FLag
	}
}