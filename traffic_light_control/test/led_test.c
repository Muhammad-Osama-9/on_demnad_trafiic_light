/*
 * led_test.c
 *
 * Created: 11/14/2022 6:54:54 PM
 *  Author: engmu
 */ 
#include "led_test.h"
void led_test(void)
{
	dio_init(PORT_C,0,OUT);
	
	while (1)
	{
		led_toggle(PORT_C,0);
		d_elay_ms(500) ; 
		
	}
	
}