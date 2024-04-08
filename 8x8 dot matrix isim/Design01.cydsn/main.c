#include "project.h"
#include <stdint.h>

#define ROWS 8
#define COLS 8

uint8_t dotMatrix_X[ROWS] = {
    0b00111000,
    0b00111000,
    0b00111000,
    0b01111100,
    0B10010010,
    0b00101000,
    0b00100100,
    0b00100010
};
uint8_t dotMatrix_xx[ROWS] = {
    0b00111000,
    0b00111000,
    0b00111000,
    0b01010100,
    0B01010100,
    0b00101000,
    0b01001000,
    0b10001000
};
uint8_t dotMatrix_E[ROWS] = {
    0b11111111,
    0b00000011,
    0b00000011,
    0b11111111,
    0b11111111,
    0b00000011,
    0b00000011,
    0b11111111
};
uint8_t dotMatrix_R[ROWS] = {
    0b11111111,
    0b11000011,
    0b11111111,
    0b00000111,
    0b00011011,
    0b00110011,
    0b01100011,
    0b11000011
};
uint8_t dotMatrix_M[ROWS] = {
    0b10000001,
    0b11000011,
    0b11111111,
    0b11011011,
    0b11000011,
    0b11000011,
    0b11000011,
    0b11000011
};
void displayDotMatrix_E() {
    for (int row = 0; row < ROWS; row++) {
        Pin_Row_Write(~(1 << row)); // Update the row
        Pin_Col_Write(dotMatrix_E[row]); // Update the column
        CyDelay(1); // Delay for visualization
        Pin_Row_Write(0); // Turn off the row
    }
}

void displayDotMatrix_R() {
    for (int row = 0; row < ROWS; row++) {
        Pin_Row_Write(~(1 << row)); // Update the row
        Pin_Col_Write(dotMatrix_R[row]); // Update the column
        CyDelay(1); // Delay for visualization
        Pin_Row_Write(0); // Turn off the row
    }
}
void displayDotMatrix_M() {
    for (int row = 0; row < ROWS; row++) {
        Pin_Row_Write(~(1 << row)); // Update the row
        Pin_Col_Write(dotMatrix_M[row]); // Update the column
        CyDelay(1); // Delay for visualization
        Pin_Row_Write(0); // Turn off the row
    }
}

void clearDotMatrix() {
    for (int row = 0; row < ROWS; row++) {
        Pin_Row_Write(~(1 << row)); // Update the row with all zeros
        Pin_Col_Write(0); // Update the column with all zeros to turn off LEDs
        // Delay for visualization (optional)
        Pin_Row_Write(0); // Turn off the row
    }
}
void displayDotMatrix_xx() {
    for (int row = 0; row < ROWS; row++) {
        Pin_Row_Write(~(1 << row)); // Update the row
        Pin_Col_Write(dotMatrix_xx[row]); // Update the column
        CyDelay(1); // Delay for visualization
        Pin_Row_Write(0); // Turn off the row
    }
}

  void delay(void (*func)()) {
    int count;
    for (count = 0; count < 100; count++) {
        func();
    }}
void displayDotMatrix_X() {
    for (int row = 0; row < ROWS; row++) {
        Pin_Row_Write(~(1 << row)); // Update the row
        Pin_Col_Write(dotMatrix_X[row]); // Update the column
        CyDelay(1); // Delay for visualization
        Pin_Row_Write(0); // Turn off the row
    }
}


int main(void){

    CyGlobalIntEnable; // Enable global interrupts
   for(;;){
    
   displayDotMatrix_E();
    delay(displayDotMatrix_E);
    clearDotMatrix(); 
    
       displayDotMatrix_M();
       delay(displayDotMatrix_M);
       clearDotMatrix();
    
    
       displayDotMatrix_R();
        delay(displayDotMatrix_R);
         clearDotMatrix();
           
        /* displayDotMatrix_X();
        delay(displayDotMatrix_X);
         clearDotMatrix();
        
        displayDotMatrix_xx();
        delay(displayDotMatrix_xx);
         clearDotMatrix();*/
        
}

}
     