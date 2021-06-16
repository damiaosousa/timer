/*
 * File:   main.c
 * Author: 20185076
 *
 * Created on 16 de Junho de 2021, 14:00
 */


#include "config.h"
#include <xc.h>
#include "delay.h"
#include "dispLCD4vias.h"
#include "timer.h"


void main(void)
{
    dispLCD_init();
    timers_init();
    
    dispLCD(0,0,"Contador:       ");
    while( 1 )
    {
        dispLCD_num(0,10, contador, 5 );
    }
}
