#include "main.h"
#include <stdarg.h>

/**
 * convert_string - convert the %c in printf
 *
 * @converter: list of args
 *
 * Return: void
 */

void convert_string(va_list converter)
{
	char *str;

	str = va_arg(converter, char *);

	while (*str)
	{
		_putchar(*str);
		str++;
	}
}
