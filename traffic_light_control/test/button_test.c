/*
 * button_test.c
 *
 * Created: 11/14/2022 6:54:40 PM
 *  Author: engmu
 */ 
#include "button_test.h"
void button_test (void)
{
	button_init(PORT_C,1);
	led_init(PORT_C,0);
	uint8 button = not_pressed ; 
	
	while (1)
	{ 
		dio_read(PORT_C,1,&button);
		
		if (button==pressed )
		{
			led_on(PORT_C,0);
		}
		else{led_off(PORT_C,0);}
	}
}