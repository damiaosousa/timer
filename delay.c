/*
 * File:   delay.c
 * Author: 20185076
 *
 * Created on 16 de Junho de 2021, 14:06
 */


#include <xc.h>
#include "config.h"

void delay(unsigned int t )

{
    while ( t )
    {
        __delay_ms(1);
        --t;
    }
}