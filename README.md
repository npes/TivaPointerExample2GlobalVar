# TivaPointerExample2GlobalVar

main.c
Runs on LM4F120/TM4C123
UART runs at 115,200 baud rate 
Daniel Valvano
May 23, 2014

This example accompanies the books
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
