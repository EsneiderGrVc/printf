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

	f = get_specifier_function(&format[i + 1]);

	va_end(ar);

	return (1);
}

int (*get_specifier_function(const char *format))(va_list)
{
	print_op a[] =
	{
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};
	int i = 0;

	while (a[i].op)
	{
		if (*format == *(a[i].op))
			break;
		i++;
	}
	/* printf("%s", &format[i]); */
	return(a[i].f);
}
