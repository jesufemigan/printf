#include <stdarg.h>
#include "main.h"
#include <limits.h>

/**
 * print_num - print num to standard output
 *
 * @num: number to print
 *
 * Return: int
 */

int print_num(int num)
{
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	if (num / 10)
		print_num(num / 10);
	_putchar((num % 10) + '0');

	if (num == 0)
		return (1);
	while (num != 0)
	{
		count++;
		num /= 10;
	}
	return (count);
}

/**
 * print_unum - print unsigned int
 * @num: number to print
 * Return: int
 */

int print_unum(unsigned int num)
{
	int count = 0;

	if (num / 10)
		print_unum(num / 10);
	_putchar((num % 10) + '0');

	if (num == 0)
		return (1);
	while (num != 0)
	{
		count++;
		num /= 10;
	}
	return (count);
}

/**
 * convert_signed_int - handle %d and %i
 *
 * @converter: list of args
 *
 * Return: int
 */

int convert_signed_int(va_list converter)
{
	int num;

	num = va_arg(converter, signed int);
	return (print_num(num));
}

/**
 * convert_unsigned_int - handle %u
 * @converter: list of args
 * Return: int
 */

int convert_unsigned_int(va_list converter)
{
	int num;
	unsigned int unum;

	num = va_arg(converter, int);

	if (num < 0)
	{
		num = -num;
		unum = UINT_MAX - (unsigned int)(num - 1);
		return (print_unum(unum));
	}
	else
	{
		return (print_unum(num));
	}
}
