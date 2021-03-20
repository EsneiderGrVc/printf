# _printf

_printf it's a program who replies the work of the real printf function.

**Prototype:**  ```int _printf(const char *, ...);```

## Examples

### String _printf("Let's try to printf a simple sentence.\n");
* Output: Let's try to printf a simple sentence.

### Integers _printf("Length:[%d, %i]\n", 1, 2);
* Output: Lenght: 1, 2.

## Requirements:
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to * your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called holberton.h
* Don’t forget to push your header file
* All your header files should be include guarded
* Note that we will not provide the _putchar function for this project

## File description
* _printf.c:
This file contains all the alghoritms who prints the output of the program and the edge cases. _printf receives two arguments the *format and a va_list. _printf will return all the characters printed and will write the output to standard out stream.
* holberton.h:
This file contains the macros, structure and all the prototypes functions used for _printf.
* get_function.c:
This file contains the alghoritm who calls the function in order to specifier.
* print_char.c:
This file contains the alghoritm to print the character pased by the arguments.
* print_number.c:
This file contains the alghoritm to print the numbers pased by the arguments.
* man_3_printf:
This file contain the manual for the _printf function.

## Authors
Esneider Granada Valencia.
Natalia Arteaga Corrales.