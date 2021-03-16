#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
* struct print - structure of print function.
* @op: string char.
* @f: function pointer.
*/

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct print
{
	char *op;
	int (*f)(va_list);
} print_op;

static int (*get_specifier_function(const char *format))(va_list);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);

#endif /* HOLBERTON_H */
