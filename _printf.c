#include "holberton.h"

/**
* _printf - entry point.
* @format: string to print and specifier.
* Return: count.
*/

int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list ar;
	int (*f)(va_list);

	va_start(ar, format);
	if (format == NULL)
		return (-1);
	/* Print strings and variables */
	while (format[i] != '\0')
	{
		/*Print *format until '\0' or % symbol */
		while (format[i] != '%' && format[i])
		{
			write(1, &format[i], 1);
			count++;
			i++;
		}
		/*if format[i] = '\0' return the count */
		if (format[i] == '\0')
			return (count);
		/* if format[i] = '%', pass specifier into get_function */
		if (format[i] == '%')
		f = get_specifier_function(&format[i + 1]);
		/* if is valid, count += arg lenght and continue */
		if (f != NULL)
		{
			count += f(ar);
			i += 2;
			continue;
		}
		/* if format[ i + 1] != '\0', keep printing */
		if (format[i + 1] == '\0')
			return (-1);
		write(1, &format[i], 1);
		count++;
		/* if after % there is another %, jump it */
		(format[i + 1] == '%') ? i += 2 : i++;
	}
	va_end(ar);
	return (count);
}
