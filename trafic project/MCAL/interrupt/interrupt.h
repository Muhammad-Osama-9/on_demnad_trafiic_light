/*
 * interrupt.h
 *
 * Created: 11/11/2022 3:28:28 PM
 *  Author: engmu
 */ 


#ifndef INTERRUPT_H_
#define INTERRUPT_H_
#include "../dio/DIO.h"

#define EXT_INT_0 __vector_1
#define EXT_INT_1 __vector_2
#define EXT_INT_2 __vector_3

#define ISR(INT_VECT) void INT_VECT(void) __attribute__((signal,used));\
void INT_VECT(void)
void enable_global_interrupts(void);
void button_interrupt(void);
#endif /* INTERRUPT_H_ */