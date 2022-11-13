/*
 * button.c
 *
 * Created: 11/11/2022 3:32:52 PM
 *  Author: engmu
 */ 
#include "button.h"
void button_init (uint8 port  , uint8 pin )
{
	dio_init(port,pin,IN) ; 
}
void button_read (uint8 port , uint8 pin , uint8 * value)
{
	dio_read(port , pin , value ) ; 
} 
ISR(EXT_INT_0)
{
	
}