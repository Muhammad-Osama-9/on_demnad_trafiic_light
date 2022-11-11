/*
 * app.c
 *
 * Created: 11/11/2022 2:01:30 PM
 *  Author: engmu
 */ 
#include "app.h"
void app_init(void)
{
	led_init(); 
	
	
	
}
void app_start (void)
{
	
	while (1) // LOOP
	{
		
		led();
		
	}
	
}
