/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include <stdio.h>

#define MACH 346.513
char str[128] ; 
void init_hardware(void)
{
    CyGlobalIntEnable;
    Clock_12MHz_Start();
    UART_Start();
    Timer_Start();  
}
   void pulse_trigger(void)
{
    Trigger_Write(1);
    CyDelayUs(10); // 10 mikro saniyeliğe trigger ucu açık bırakılır ve kapanır 40 khz lik darbe üretilir  
    Trigger_Write(0);
}
    
uint32_t measure_echo(void)
{
    u_int32_t lenght;
   #if 0 
    while(Echo_Read() == 0 );
    Timer_WriteCounter(0);
    while(Echo_Read() !=0);
    lenght = Timer_ReadCounter();
    return (lenght);
    #else
    Timer_Stop();   
    Timer_WriteCounter(0);
    while(Echo_Read()==0);
    Timer_Start();
    while(Echo_Read()!=0) ;
    Timer_Stop();
    lenght= Timer_ReadCounter();
    return(lenght);
    #endif
} 
void print_value(uint32_t duration)
{ double distance =0.0;
    distance = (double)(duration)* MACH /240000.0;
    sprintf(str,"%d.%2dcm\n,",(int)distance,(int)(100*distance)%100);
    UART_UartPutString(str);
}
int main(void){
    uint32_t duration;
    init_hardware();
    for(;;){
    pulse_trigger();
    duration=measure_echo();
    print_value(duration);
    CyDelay(100);
    }}
    
    
    