/*
 * app.c
 *
 * Created: 11/11/2022 2:01:30 PM
 *  Author: engmu
 */ 
#include "app.h"
void app_init(void)
{
	
	
	led_init(PORT_A,0);// --- LED RED CAR --- //
	led_init(PORT_A,1);// --- LED YELLOW CAR --- //
	led_init(PORT_A,2);// --- LED GREEN CAR --- //

	led_init(PORT_B,0);// --- LED RED PEDISTRIAN  --- //
	led_init(PORT_B,1);// --- LED YELLOW PEDISTRIAN  --- //
	led_init(PORT_B,2);// --- LED GREEN PEDISTRIAN  --- //
	
	button_init(PORT_D,2) ; // button with the interrupt
	enable_global_interrupts() ; 
	button_interrupt();
	
	
}
void app_start (void)
{
	
	while (1) // LOOP
	{ 
		// red car green pedestrians // 
              c_stop_p_go() ; 
		// Yellow cars & Pedestrians // 
			yellow_cgo_pstop () ;
			// Green Cars  Red pedestrian // 
				c_go_ped_stop() ; 
				// Yellow cars & Pedestrians //
		         	yellow_cstop_pgo () ;
				   
		
	}
	
}
