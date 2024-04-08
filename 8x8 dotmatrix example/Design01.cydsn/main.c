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
#include <stdint.h>

#define ROWS 8
#define COLS 8

uint8_t dotMatrix_1[ROWS] = {
    0b00000001,
    0b00000001,
    0b00000001,
    0b00000001,
    0b00000001,
    0b00000001,
    0b00000001,
    0b11111111
};
uint8_t dotMatrix_6[ROWS] = {
    0b00000000,
    0b00000000,
    0b00111000,
    0b00100000,
    0b00100000,
    0b00100000,
    0b00000000,
    0b00000000
};
uint8_t dotMatrix_2[ROWS] = {
    0b11111110,
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000,
    0b10000000
};
uint8_t dotMatrix_3[ROWS] = {
    0b00000010,
    0b00000010,
    0b00000010,
    0b00000010,
    0b00000010,
    0b00000010,
    0b01111110,
    0b00000000
};
uint8_t dotMatrix_4[ROWS] = {
    0b00000000,
    0b01111100,
    0b01000000,
    0b01000000,
    0b01000000,
    0b01000000,
    0b01000000,
    0b00000000
};
uint8_t dotMatrix_5[ROWS] = {
    0b00000000,
    0b00000100,
    0b00000100,
    0b00000100,
    0b00000100,
    0b00111100,
    0b00000000,
    0b00000000};

uint8_t dotMatrix_7[ROWS] = {
    0b00000000,
    0b00000000,
    0b00001000,
    0b00001000,
    0b00011000,
    0b00000000,
    0b00000000,
    0b00000000
};
uint8_t dotMatrix_8[ROWS] = {
    0b00000000,
    0b00000000,
    0b00000000,
    0b00010000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000
};
void displayDotMatrix_7() {
    for (int row = 0; row < ROWS; row++) {
        Pin_Row_Write(~(1 << row)); 
        Pin_Col_Write(dotMatrix_7[row]); 
        CyDelay(40); 
        Pin_Row_Write(0); 
        
    }
}
void displayDotMatrix_5() {
    for (int row = 0; row < ROWS; row++) {
        Pin_Row_Write(~(1 << row)); 
        Pin_Col_Write(dotMatrix_5[row]); 
        CyDelay(40); 
        Pin_Row_Write(0); 
    }
}
void displayDotMatrix_8() {
    for (int row = 0; row<ROWS; row++) {
        Pin_Row_Write(~(1 << row)); 
        Pin_Col_Write(dotMatrix_8[row]); 
        CyDelay(40); 
        Pin_Row_Write(0);
    }
}
void displayDotMatrix_2() {
    for (int row = ROWS-1; row >= 0; row--) {
        Pin_Row_Write(~(1 << row)); 
        Pin_Col_Write(dotMatrix_2[row]); 
        CyDelay(40);
        Pin_Row_Write(0); 
    }
}

void displayDotMatrix_3() {
    for (int row = 0; row < ROWS; row++) {
        Pin_Row_Write(~(1 << row)); 
        Pin_Col_Write(dotMatrix_3[row]); 
        CyDelay(40); 
        Pin_Row_Write(0); 
    }
}
void displayDotMatrix_4() {
    for (int row = ROWS; row >= 0; row--) {
        Pin_Row_Write(~(1 << row)); 
        Pin_Col_Write(dotMatrix_4[row]); 
        CyDelay(40); 
        Pin_Row_Write(0);
     
    }
}

void clearDotMatrix() {
    for (int row = 0; row < ROWS; row++) {
        Pin_Row_Write(~(1 << row));
        Pin_Col_Write(0); 
        
        Pin_Row_Write(0); 
    }
}
void displayDotMatrix_6() {
    for (int row = ROWS-1; row >= 0; row--) {
        Pin_Row_Write(~(1 << row)); 
        Pin_Col_Write(dotMatrix_6[row]);
        CyDelay(40); 
        Pin_Row_Write(0);
   
    }
}

  void delay(void (*func)()) {
    int count;
    for (count = 0; count < 10; count++) {
        func();
    }}
void displayDotMatrix_1() {
    for (int row = 0; row < ROWS; row++) {
        Pin_Row_Write(~(1 << row)); 
        Pin_Col_Write(dotMatrix_1[row]); 
        CyDelay(40); 
        Pin_Row_Write(0);
     
    }
}


int main(void){

    CyGlobalIntEnable; 
   for(;;){
        
    displayDotMatrix_1();
    displayDotMatrix_2();
    displayDotMatrix_3();
    displayDotMatrix_4();
    displayDotMatrix_5();
    displayDotMatrix_6();
    displayDotMatrix_7();
    displayDotMatrix_8();
  CyDelay(1000);
}

}
  