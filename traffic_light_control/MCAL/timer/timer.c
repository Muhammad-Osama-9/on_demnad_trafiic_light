/*
 * timer.c
 *
 * Created: 11/11/2022 3:29:12 PM
 *  Author: engmu
 */ 
#include "timer.h"
volatile uint16 N_s ; 
volatile uint16 N_ms ; 
void d_elay_s (uint16 t_sec)
{
	N_s= 0 ;
	 N_s = (int) t_sec / 0.2621 ; 
	TCCR0 = 0x00 ; // initi 
	TCNT0 = 0; 
	TCCR0 = 0x05; // 1024 prescaller - START Timer
	while (N_s--)
	{
		
	    	  while (!(GET_BIT(TIFR,0))) ;
	    	  SET_BIT(TIFR,0) ; // remove FLag 
	}
	//stop the timer
	TCCR0 = 0x00 ;
	N_s= 0 ;
	TCNT0 = 0x00 ;
}
void d_elay_ms (uint16 t_msec)
{
  uint16 N = (int)t_msec / 16.384 ; //  (16.384) -->  time to overflow counter with 64 prescaller
  TCCR0 = 0x00 ; // initi
  TCNT0 = (int)(t_msec / 0.064 ) / N ;// initial count number 
  TCCR0 = 0x03; // 64 prescaller - START Timer
  while (N--)
  {
	  
	  while (!(GET_BIT(TIFR,0))) ; // delay // 
	  
	  SET_BIT(TIFR,0) ; // remove FLag
  }
  TCNT0 = 0x00 ; 
	
}