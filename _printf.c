#include "holberton.h"

/**
*
*
*
*/

int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list ar;
	int (*f)(va_list);
	va_start(ar, format);
	while (format[i] != '\0')
		{
			while (format[i] != '%' && format[i])
				{
					write(1, format[i], 1);
					count++, i++;
				}
			if (format[i] == '\0')
				return (count);
			if (format[i] == '%')
				f = get_specifier_function(&format[i + 1]);
		}
	va_end(ar);
	return(count);
}
