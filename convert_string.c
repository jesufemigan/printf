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

int convert_special_string(va_list converter)
{
	char *str;
	int count = 0;

	str = va_arg(converter, char *);

	while (*str)
	{
		if ((*str > 0 && *str < 32) || (*str >= 127))
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count += int_to_hex(*str, 1);
			str++;
		}
		_putchar(*str);
		count++;
		str++;
	}
	return (count);
}
