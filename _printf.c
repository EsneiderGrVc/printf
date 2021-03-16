#include "holberton.h"

/**
*
*
*
*/

int _printf(const char *format, ...)
{
	int i = 0;
	va_list ar;
	int (*f)(va_list);
	va_start(ar, format);

	f = get_specifier_function(&format[i+1]);

	va_end(ar);

	return (f);
}

