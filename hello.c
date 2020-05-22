//creating my first C program using Vim text editor.
//cursor is just a text box that hovers on the display.
//algorithm: step by step instructions.
//anything that a computer can do comes down to a modular function.
//learning curve for programming requires knowledge not easily digestable at once. 
//functions give us a toolbox of commands we can tell the computer, and programs can call other programs like a chain; returning '0' indicates everything went ok. 

#include <stdio.h>

int main()
{
	printf("Hello World!\n");
	return 0;
}

//gcc compiles our source code into machine language 
//that gets processed by the computer processor.
//to insert in VIM click 'i', then 'esc' to exit.
//to save changes in VIM 'esc', then ':w'.
//to quit VIM click ':q'.

//how a c program works:
//components of C 'Hello' program: 1. function 2. identifier (name of something)-> main, by 
//convention, this is the function that is called when we first run our program. 3. data types, at the beginning of our 'main' function, which our return statement generates if the program executes successfully. 4. libraries (file that contains printf() function).
//main is the first function that is executed in our program.
//inside our main function is the stuff we want to do: two statements, our print statement and return statement.
//statements can be thought of as commands, denoted with a semicolon at the end.
//printf() is a function derived from our stdio.h library.
//the 'include' statement includes code, or alogriths, that define the printf() function.
//library, or file 'stdio' defines function printf() that we want to include in our program.
//the back-slash-n, '\n', is called the newline character. When the console tries to print our '\n'character, the cursor gets moved down to the next line on the console.

