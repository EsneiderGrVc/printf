#include "holberton.h"

/**
*
*
*
*/

<<<<<<< HEAD
int (*get_specifier_function(const char *format))(va_list)
=======
int _printf(const char *format, ...)
>>>>>>> master
{
	int i = 0;
	va_list ar;
	int (*f)(va_list);
	va_start(ar, format);

<<<<<<< HEAD
	while (a[i].op)
	{
		if (*format == *(a[i].op))
			break;
		i++;
	}
	return(a[i].f);
}

int _printf(const char *format, ...)
{
	va_list esp;	/* esp: especifier ("c", "s") */
	int (*f)(va_list); /* Pointer to print_ function */

	va_start(esp, format);
	f = (get_specifier_function(&format[1]));

	va_end(esp);
	return (1);
}
=======
	f = get_specifier_function(&format[i+1]);

	va_end(ar);

	return (f);
}
>>>>>>> master
