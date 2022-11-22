/*
 * app.c
 *
 * Created: 11/11/2022 2:01:30 PM
 *  Author: engmu
 */ 
#include "app.h"
 uint8 button = button_not_activated; // <-- Button flag 
  uint8 long_pressed = FALSE ; 

void app_init(void)
{
	
	
	led_init(PORT_A,0);// --- LED RED CAR --- //
	led_init(PORT_A,1);// --- LED YELLOW CAR --- //
	led_init(PORT_A,2);// --- LED GREEN CAR --- //

	led_init(PORT_B,0);// --- LED RED PEDISTRIAN  --- //
	led_init(PORT_B,1);// --- LED YELLOW PEDISTRIAN  --- //
	led_init(PORT_B,2);// --- LED GREEN PEDISTRIAN  --- //
	
	button_init(PORT_D,2) ; // button with the interrupt
	enable_global_interrupts() ; // sreg register //
	button_interrupt(); 
	
	
}
void app_start (void)
{
	
	while (1) // LOOP
	{ 
		
	// Green Cars  Red pedestrian //
	    button = button_activated ;
		c_go_ped_stop() ;	
		if (interrupt_happend)
		{
			interrupt_happend = FALSE ; 
			c_go_ped_stop() ;
			 
		} 
		button = button_not_activated ; 
    // Yellow cars & Pedestrians //
		 yellow_cstop_pgo () ;
	// red car green pedestrians // 
		 c_stop_p_go() ; 
	// Yellow cars & Pedestrians // 	     
		yellow_cgo_pstop () ;
									
		
				  
		
	}
	
}
ISR(EXT_INT_0)
{
	   if (button == button_activated)
	    {
				  uint32 wait = 500000 ; 		
			 while (wait--) ; // unaccurate bussy wait to detect the loong pressed only //
		    button_read(PORT_D,2,&long_pressed); // check long pressed buton // 	
					 
			 if (long_pressed==FALSE)
			 {	 
				 interrupt_happend = TRUE ;    
   /**  Turning All LED OF **/ 
	    led_off(PORT_A,0);
	    led_off(PORT_A,1);
		led_off(PORT_A,2);
		led_off(PORT_B,0);
		led_off(PORT_B,1);
		led_off(PORT_B,2);
  /*******************************/

		yellow_cstop_pgo () ;
		c_stop_p_go() ; 
 		yellow_cgo_pstop () ;
		
			 }
      else {}
	}
else {}
}