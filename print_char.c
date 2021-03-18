#include "holberton.h"

/**
* print_c - c argument.
* @c: char.
* Return: char.
*/

int print_c(va_list c)
{
	char ch = va_arg(c, int);

	write(1, &ch, 1);
	return (1);
}

/**
* print_s - string arguments.
* @s: string.
* Return: len of string.
*/

int print_s(va_list s)
{
	int len = 0;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";

	/* Find the str lenght */
	while (str[len])
		len++;

	write(1, str, len);
	return (len);
}
