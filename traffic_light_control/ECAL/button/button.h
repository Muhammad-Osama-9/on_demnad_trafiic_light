/*
 * IncFile1.h
 *
 * Created: 11/11/2022 3:33:04 PM
 *  Author: engmu
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
#include "../../MCAL/dio/DIO.h"
#include "../../MCAL/interrupt/interrupt.h"
void button_init (uint8 port  , uint8 pin );
void button_read (uint8 port , uint8 pin , uint8 * value);


#endif /* INCFILE1_H_ */