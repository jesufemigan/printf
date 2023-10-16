#include <stdarg.h>
#include "main.h"
#include <limits.h>

/**
 * print_num - print num to standard output
 *
 * @num: number to print
 *
 * Return: void
 */

void print_num(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num / 10)
		print_num(num / 10);
	_putchar((num % 10) + '0');
}

/**
 * print_unum - print unsigned int
 * @num: number to print
 * Return: void
 */

void print_unum(unsigned int num)
{
	if (num / 10)
		print_unum(num / 10);
	_putchar((num % 10) + '0');
}

/**
 * convert_signed_int - handle %d and %i
 *
 * @converter: list of args
 *
 * Return: void
 */

void convert_signed_int(va_list converter)
{
	int num;

	num = va_arg(converter, signed int);
	print_num(num);
}

/**
 * convert_unsigned_int - handle %u
 * @converter: list of args
 * Return: void
 */

void convert_unsigned_int(va_list converter)
{
	int num;
	unsigned int unum;

	num = va_arg(converter, int);

	if (num < 0)
	{
		num = -num;
		unum = UINT_MAX - (unsigned int)(num - 1);
		print_unum(unum);
	}
	else
	{
		print_unum(num);
	}
}
