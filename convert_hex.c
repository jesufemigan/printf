#include <stdarg.h>
#include "main.h"

/**
 * int_to_hex - convert to hex
 *
 * @num: number to convert
 * @upper: 1 if uppercase , 0 if lowercase
 * Return: int
 */

int int_to_hex(int num, int upper)
{
	int i;
	char hexStr[32];
	int index = 0;
	char *hex = (upper == 1) ? "0123456789ABCDEF" : "0123456789abcdef";
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}

	while (num > 0)
	{
		int remainder = num % 16;

		hexStr[index] = hex[remainder];
		index++;
		num /= 16;
	}
	_putchar('0');
	_putchar('x');

	count += 2;
	for (i = index - 1; i >= 0; i--)
	{
		_putchar(hexStr[i]);
		count++;
	}
	return (count);
}

/**
 * convert_hex_lower - convert to hex %x
 * @converter: list of args
 * Return: int
 */

int convert_hex_lower(va_list converter)
{
	int num;

	num = va_arg(converter, int);
	return (int_to_hex(num, 0));
}

/**
 * convert_hex_upper - convert to hex %X
 * @converter: list of args
 * Return: int
 */

int convert_hex_upper(va_list converter)
{
	int num;

	num = va_arg(converter, int);
	return (int_to_hex(num, 1));
}
