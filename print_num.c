#include "holberton.h"

/**
* print_d - function to print an integer.
* @d: integer passed through va_list.
* Return: number of digits printed.
*/

int print_d(va_list d)
{
	int *array;
	int num = va_arg(d, int);
	int mod, index = 0, j = 0;
	int len = len_number(num, 0);

	if (num < 0)
		write(1, "-", 1);

	array = malloc(len * sizeof(int));

	while ((num % 10) != 0)
	{
		mod = num % 10;
		if (mod < 0)
			mod = -mod;
		array[index] = mod;
		num /= 10;
		index++;
		j++;
	}

	while (j > 0)
	{
		/* putchar(array[j - 1] + '0'); */
		char character = (array[j - 1] + '0');
		/* printf("d", array[j - 1]); */
		write(1, &character, 1);
		j--;
	}

	return (len);
}

/**
* print_i - function to print an integer.
* @i: integer passed through va_list.
* Return: number of digits printed.
*/

int print_i(va_list i)
{
	int *array;
	int num = va_arg(i, int);
	int mod, index = 0, j = 0;
	int len = len_number(num, 0);

	if (num < 0)
		/* putchar('-'); */
		write(1, "-", 1);

	array = malloc(len * sizeof(int));

	while ((num % 10) != 0)
	{
		mod = num % 10;
		if (mod < 0)
			mod = -mod;
		array[index] = mod;
		num /= 10;
		index++;
		j++;
	}

	while (j > 0)
	{
		/* putchar(array[j - 1] + '0'); */
		char character = (array[j - 1] + '0');

		write(1, &character, 1);
		j--;
	}

	return (len);
}

/**
* len_number - function to get the numbers to print.
* @n: integer passed through va_list.
* @len: variable that wull contain the number of digits.
* Return: len.
*/

int len_number(int n, int len)
{
	if (n % 10 == 0)
		return (len);
	len += 1;
	return (len_number(n /= 10, len));
}
