#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
* struct print - structure of print function.
* @op: string char.
* @f: function pointer.
*/

typedef struct print
{
	char *op;
	int (*f)(va_list);
} print_op;

int _printf(const char *format, ...);
#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stadarg.h>

#endif /*HOLBERTON_H */
