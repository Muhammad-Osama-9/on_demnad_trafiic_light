/*
 * DIO.h
 *
 * Created: 10/22/2022 9:49:06 PM
 *  Author: engmu
 */ 


#ifndef DIO_H_
#define DIO_H_




#include "../../drivers/regmap.h"
#define F_CPU 1000000U // 1 MHZ
#include <util/delay.h>
//-----------------------MACROS-----------------//

#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'
// -------------------------FUNCTIONS----------//

void dio_init (uint8 port_num , uint8 pin , uint8 direction);  //start the pin
void  dio_write (uint8 port_num , uint8 pin , uint8 value ); // write on Port
uint8 dio_read (uint8 port_num , uint8 pin , uint8 *value); // read on Port pin
void dio_toggle (uint8 port_num , uint8 pin );  // flip the Bit



#endif /* DIO_H_ */