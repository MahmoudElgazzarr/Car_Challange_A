/*
 * DIO_driver.h
 *
 * Created: 2/13/2019 2:15:49 PM
 *  Author: AVE-LAP-023
 */ 


#ifndef DIO_DRIVER_H_
#define DIO_DRIVER_H_

#include "../includes/BiteWiseOperation.h"
#include "../includes/Types.h"

#define pin0  0
#define pin1  1
#define pin2  2
#define pin3  3
#define pin4  4
#define pin5  5
#define pin6  6
#define pin7  7
#define pin8  8
#define pin9  9
#define pin10 10
#define pin11 11
#define pin12 12
#define pin13 13
#define pin14 14
#define pin15 15
#define pin16 16
#define pin17 17
#define pin18 18
#define pin19 19
#define pin20 20
#define pin21 21
#define pin22 22
#define pin23 23
#define pin24 24
#define pin25 25
#define pin26 26
#define pin27 27
#define pin28 28
#define pin29 29
#define pin30 30
#define pin31 31
#define High 1
#define LOW 0
#define Input_PUll_UP 0
#define INPUT_WITHOUT_PULL 1
#define OUTPUT 2



#define led0 12     /* pin value of led0 on board */
#define led1 13       /* pin value of led1 on board */
#define led2 14          /* pin value of led2 on board */
#define led3 15        /* pin value of led3 on board */
#define but1  10         /* pin value of button 1 on board */
#define  but0 20            /* pin avlue of button 0 on the board */
#define PORTA_START 0        /* port A starting pin on board */
#define PORTA_END 7          /* port A ending pin on board */
#define PORTB_START 8        /* port B starting pin on board */
#define PORTB_END 15           /* port B ending pin on board */
#define PORTC_START 16           /* port C starting pin on board */
#define PORTC_END 23            /* port C ending pin on board */
#define PORTD_START 24        /* port D starting pin on board */
#define PORTD_END 31            /* port D ending pin on board */




/********************************************************************************************************
* Function name :- DIO_WritePin                                                                         *
* function job :- write value in port if micro controller                                               *
* function arguments :- pin number and the value written to it                                          *
* function return :-            N/A                                                                     *
********************************************************************************************************/
void DIO_WritePin(uint8 PinNum,uint8 PinValue);
/********************************************************************************************************
* Function name :- DIO_ReadPin                                                                          *
* function job :- Read value from pin of micro controller                                               *
* function arguments :- pin number                                                                      *
* function return :-            N/A                                                                     *
********************************************************************************************************/
uint8 DIO_ReadPin(uint8 PinNum);
/********************************************************************************************************
* Function name :- DIO_SetPinDirection                                                                  *
* function job :- determine direction of specified pin                                                  *
* function arguments :- pin number and desired direction (I/O)                                          *
* function return :-            N/A                                                                     *
*********************************************************************************************************/
void DIO_SetPinDirection(uint8 PinNum,uint8 PinDirection);
/********************************************************************************************************
* Function name :- DIO_togglePin                                                                        *
* function job :- toggle desired pin                                                                    *
* function arguments :- pin number and the value written to it                                          *
* function return :-            N/A                                                                     *
*********************************************************************************************************/
void DIO_togglePin(uint8 PinNum);



#endif /* DIO_DRIVER_H_ */