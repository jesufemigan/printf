#include <stdarg.h>
#include "main.h"

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
 * convert_int - handle %d and %i
 *
 * @converter: list of args
 *
 * Return: void
 */

void convert_int(va_list converter)
{
	int num;

	num = va_arg(converter, int);
	print_num(num);
}
