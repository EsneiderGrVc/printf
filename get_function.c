#include "holberton.h"

/**
* get_specifier_function - Selects the right function according specifier.
* @format: String to print and specifier.
* Return: Number of characters printed.
*/

int (*get_specifier_function(const char *format))(va_list)
{
	print_op a[] = {
		{"c", print_c},
		{"s", print_s},
		/**
		* {"d", print_d},
		* {"i", print_i},
		*/
		{NULL, NULL}
	};
	int i = 0;

	/* Find the match between specifier and first argument from a[i] */
	while (a[i].op)
	{
		if (*format == *(a[i].op))
			break;
		i++;
	}
	return (a[i].f);
}
