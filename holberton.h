#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
* struct print - structure of print function.
* @op: string char.
* @f: function pointer.
*/

#include <unistd.h>
#include <stdarg.h>

typedef struct print
{
	char *op;
	int (*f)(va_list);
} print_op;

int _printf(const char *format, ...);

#endif /*HOLBERTON_H */
