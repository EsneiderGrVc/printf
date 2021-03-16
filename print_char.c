#include "holberton.h"
#include <stdio.h>

/**
* print_c - c argument.
* @c: char.
* Return: char.
*/

int print_c(va_list c)
{
	char *ch = (char)va_arg(c, int);
	putchar(ch);

	return (1);
}

/**
* print_s - string arguments.
* @s: string.
* Return: len of string.
*/

int print_s(va_list s)
{
	char *str = va_arg(s, char *);

	int len = 0;

	while (str[len])
	len++;

	write(1,str,len);

	return (len);
}
