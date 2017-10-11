// main.c
// Runs on LM4F120/TM4C123
// UART runs at 115,200 baud rate 
// Daniel Valvano
// May 23, 2014

/* This example accompanies the books
  "Embedded Systems: Introduction to ARM Cortex M Microcontrollers",
  ISBN: 978-1469998749, Jonathan Valvano, copyright (c) 2014

"Embedded Systems: Real Time Interfacing to ARM Cortex M Microcontrollers",
   ISBN: 978-1463590154, Jonathan Valvano, copyright (c) 2014
 
 Copyright 2014 by Jonathan W. Valvano, valvano@mail.utexas.edu 
 http://users.ece.utexas.edu/~valvano/
 
 Modified by NISI 11.10.2017 to demonstrate the scope of global variables.
 Global variables should be avoided to prevent accidental overwrite.
 Also global variables live on the HEAP compared to local variables that lives on the STACK.
 
 Challenge: Put the var declaration inside main and obtain the same functionality using pointers.
 */

#include <stdio.h>
#include <stdint.h> // C99 variable types
void Output_Init(void);
void increment1ByValue(uint16_t parameter);
void increment2ByValue(uint16_t parameter);
void Delay(void);

//Global variables
uint16_t var = 0;						//Can be accessed from anywhere, R value is 0

int main(void){ 
	Output_Init();              // initialize output device
	
	while(1){
	increment1ByValue(var);	//call increment1 function with var as parameter
	printf ("var is: %d\n", var); //print value of var
	Delay();
	
	increment2ByValue(var);	//call increment2 function with var as parameter
	printf ("var is: %d\n", var); //print value of var
	Delay();
	};
}

void increment1ByValue(uint16_t parameter){
	var = parameter + 1;	//increment var by 1
};

void increment2ByValue(uint16_t parameter){
	var = parameter + 2;	//increment var by 2
}

void Delay(void){
	unsigned long volatile time;
  time = 727240*200/91;  // app. 1sec
  while(time){
    time--;
  }
}
