/*
 * app.h
 *
 * Created: 11/11/2022 2:01:17 PM
 *  Author: engmu
 */ 


#ifndef APP_H_
#define APP_H_
#include "../ECAL/led/led.h"
#include "../ECAL/button/button.h"
#define button_activated 0 
#define button_not_activated 1 
extern uint8 interrupt_happend ; 
void app_init (void) ; 
void app_start(void) ; 




#endif /* APP_H_ */