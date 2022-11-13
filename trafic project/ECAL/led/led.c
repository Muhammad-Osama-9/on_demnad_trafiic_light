/*
 * led.c
 *
 * Created: 11/11/2022 3:33:27 PM
 *  Author: engmu
 */ 
#include "led.h"
void led_init(uint8 port , uint8 pin )
{
	dio_init(port , pin , OUT) ; 
}
void led_on (uint8 port,uint8 pin)
{
	dio_write(port,pin,HIGH) ; 
}
void led_off (uint8 port , uint8 pin)
{
	dio_write(port  , pin , LOW) ; 
}
void led_toggle (uint8 port , uint8 pin )
{
	dio_toggle(port , pin ) ; 
}

void c_stop_p_go  ()
{
			led_on(PORT_A,0);
			led_on (PORT_B,2) ;
			d_elay_s(4);
			for (uint8 i = 0  ; i < 10 ; i++) // blinking effect 1 sec //
			{
			//	led_on(PORT_A,0);
				led_toggle (PORT_B,2);
				d_elay_ms(100) ;
			}
			
			//led_off(PORT_A,0);
			led_off (PORT_B,2); // green 
			
}
void yellow_cgo_pstop ()
{
			led_on(PORT_A,1);
			led_on (PORT_B,1) ;
			d_elay_s(4);
			for (uint8 i = 0  ; i < 10 ; i++) // blinking effect 1 sec //
			{
				led_toggle(PORT_A,1);
				led_toggle (PORT_B,1);
				d_elay_ms(100) ;
			}
			led_off(PORT_A,0);
			led_off(PORT_A,1);
			led_off (PORT_B,1);
}
void c_go_ped_stop ()
{
	led_on(PORT_A,2);
	led_on (PORT_B,0) ;
	d_elay_s(4);
	for (uint8 i = 0  ; i < 10 ; i++) // blinking effect 1 sec //
	{
		led_toggle(PORT_A,2);
		//led_toggle (PORT_B,0);
		d_elay_ms(100) ;
	}
	
	led_off(PORT_A,2);
	//led_off (PORT_B,0);
}
void yellow_cstop_pgo ()
{
	led_on(PORT_A,1);
	led_on (PORT_B,1) ;
	d_elay_s(4);
	for (uint8 i = 0  ; i < 10 ; i++) // blinking effect 1 sec //
	{
		led_toggle(PORT_A,1);
		led_toggle (PORT_B,1);
		d_elay_ms(100) ;
	}
	led_off (PORT_B,0);
	led_off(PORT_A,1);
	led_off (PORT_B,1);
}