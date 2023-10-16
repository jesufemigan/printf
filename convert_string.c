#include "main.h"
#include <stdarg.h>

/**
 * convert_string - convert the %c in printf
 *
 * @converter: list of args
 *
 * Return: int
 */

int convert_string(va_list converter)
{
	char *str;
	int count;

	str = va_arg(converter, char *);

	while (*str)
	{
		_putchar(*str);
		count++;
		str++;
	}
	return (count);
}
