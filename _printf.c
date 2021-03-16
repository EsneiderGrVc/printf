#include "holberton.h"

/**
* get_specifier_function - en
* @format: c/s
* Return: pointer to the right function.
*/

int (*get_specifier_function(char format, ...))
{
	print_op a[] =
	{
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};
	int i = 0;

	while (a[i]->op)
	{
		if (format = a[i]->op)
			break;
		i++;
	}
	return(a[i]->f);
}
