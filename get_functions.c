#include "holberton.h"

/**
* get_specifier_function - en
* @format: c/s
* Return: pointer to the right function.
*/

static int (*get_specifier_function(const char *format))(va_list)
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
	return(a[i].f);
}
