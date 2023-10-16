#include <stdarg.h>
#include "main.h"

/**
 * int_to_octal - converts number to int
 *
 * @num: number to convert
 *
 * Return: int
 */

int int_to_octal(int num)
{
	int octal, base, remainder;

	if (num == 0)
		return (0);

	octal = 0;
	base = 1;

	while (num > 0)
	{
		remainder = num % 8;
		octal += remainder * base;
		base *= 10;
		num /= 8;
	}
	return (octal);
}

/**
 * convert_octal - print value of octal
 * @converter: list of args
 * Return: int
 */

int convert_octal(va_list converter)
{
	int num;

	num = va_arg(converter, int);
	return (print_num(int_to_octal(num)));
}
