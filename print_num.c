#include "holberton.h"

/**
* print_d - print an integer and return numbers of chars printed.
* @d: integer from va_list arguments.
* Return: count.
*/

int print_d(va_list d)
{
	int count;
	int num = va_arg(d, int);

	count = print_integer(num);
	return (count);
}

/**
* print_i - print an integer and return numbers of chars printed.
* @i: integer from va_list arguments.
* Return: count.
*/

int print_i(va_list i)
{
	int count;
	int num = va_arg(i, int);

	count = print_integer(num);
	return (count);
}

/**
* print_integer - print an integer.
* @num: integer passed through print_d and print_i function.
* Return: count.
*/

int print_integer(int num)
{
	int count = 0;
	int numberDigits = num;

	while (numberDigits != 0)
	{
		numberDigits /= 10;
		++count;
	}

	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num / 10 != 0)
		print_integer(num / 10);

	int mod = ((num % 10) + '0');

	write(1, &mod, count);
	return (count);
}
