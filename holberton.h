#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
* struct print - structure of print function.
* @op: string char.
* @f: function pointer.
*/

#include <unistd.h> /* Support to write() */
#include <stdarg.h> /* Support to variadic functions */
#include <stdlib.h> /* Support to NULL concept */

typedef struct print
{
	char *op;
	int (*f)(va_list);
} print_op;



int (*get_specifier_function(const char *format))(va_list);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_d(va_list d);
int print_i(va_list i);

int len_number(int n, int len);

#endif /* HOLBERTON_H */
