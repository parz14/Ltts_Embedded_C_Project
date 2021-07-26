/**
 * @file activity1.c
 * @author Paras (Paras2747@gmail.com)
 * @brief INITIALISE PORTS
 * @version 0.1
 * @date 2021-07-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include "activity1.h"

void initialise()//TO INITIALISE PORTS
{
    DDRB|=(1<<PB0);//TO MAKE B0 AS AN OUTPUT PIN
    DDRD&=~(3<<PD0);//TO MAKE Do and D1  AS AN INPUT PIN
    PORTD|=(3<<PD0);//PULL UP
  
}
