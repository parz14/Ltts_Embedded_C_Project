/**
 * @file seatheatingapp.c
 * @author Paras jain
 * @brief Project to Blink an LED at 1000ms ON and 500 ms OFF Interval
 * @version 0.1
 * @date 2021-08-01
 *
 * @copyright Copyright (c) 2021
 *
 */
#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
    // Direction of ports
    DDRB|=(1<<PB0);
    DDRD&=~(1<<PD1);
    DDRD&=~(1<<PD4);

    // PULL-UP +5V for push-buttons
    PORTD|=(1<<PD1);
    PORTD |=(1<<PD4);

    while(1)
    {
        if(!(PIND&(1<<PD1)) && !(PIND&(1<<PD4)))
        {
        PORTB|=(1<<PB0);
        _delay_ms(200);
        }
        else
        {
            PORTB&=~(1<<PB0);
            _delay_ms(200);
        }
    }

    return 0;
}
