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
const int dizi[16] = {0x01, 0x02, 0x04,0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08,0x04,0x02,0x01};
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    int i;

    for(;;)
    {
        for(i=0;i<=16;i++)
        {
        Ledler_Write(dizi[i]);
        CyDelay(200);
    }
}
}
