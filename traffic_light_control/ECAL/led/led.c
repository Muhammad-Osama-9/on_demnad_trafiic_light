/*
 * led.c
 *
 * Created: 11/11/2022 3:33:27 PM
 *  Author: engmu
 */ 
#include "led.h"
void led_init()
{
	dio_init(PORT_A,0, OUT);// --- LED RED CAR --- //
	dio_init(PORT_A,1, OUT);// --- LED YELLOW CAR --- //
	dio_init(PORT_A,2, OUT);// --- LED GREEN CAR --- //

	dio_init(PORT_B,0, OUT);// --- LED RED PEDISTRIAN  --- //
	dio_init(PORT_B,1, OUT);// --- LED YELLOW PEDISTRIAN  --- //
	dio_init(PORT_B,2, OUT);// --- LED GREEN PEDISTRIAN  --- //
	
	
	
}
void led ()
{
   
   for (uint8 i = 0 ; i < 4 ; i ++)
   {
	   if(i == 3 )
	   {
		   PORTA = 2 ;
		   PORTB = 2 ;
		   _delay_ms(4000) ;
		   for (uint8  j =  0 ; j<5 ; j++)
		   {

			   PORTA = 0 ;
			   PORTB = 0 ;
			   _delay_ms(100); /// 100 * 5 = 500 ms
			   PORTA = 2;
			   PORTB = 2;
			   _delay_ms(100); /// 100 *5 = 500 ms
		   }
		   continue ;
	   }
	   PORTA = 1 << i;
	   PORTB = 4 >> i ;
	   _delay_ms(4000) ;
	   
	   for (uint8  j =  0 ; j<5 ; j++)
	   {

		   PORTA = 0 ;
		   PORTB = 0 ;
		   _delay_ms(100); /// 100 * 5 = 500 ms
		   PORTA = 1 << i;
		   PORTB = 4 >> i;
		   _delay_ms(100); /// 100 *5 = 500 ms
	   }
   }
   	
}