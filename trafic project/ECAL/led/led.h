/*
 * led.h
 *
 * Created: 11/11/2022 3:33:34 PM
 *  Author: engmu
 */ 


#ifndef LED_H_
#define LED_H_
#include "../../MCAL/dio/DIO.h"
#include "../../MCAL/timer/timer.h"
void led_init(uint8 port , uint8 pin ) ;
void led_on (uint8 port,uint8 pin);
void led_off (uint8 port , uint8 pin);
void led_toggle (uint8 port , uint8 pin ) ; 
void c_stop_p_go  () ; 
void yellow_cstop_pgo () ; 
void yellow_cgo_pstop () ; 
void c_go_ped_stop () ; 

#endif /* LED_H_ */