#include <stdarg.h>
#include "main.h"

/**
 * int_to_binary - convert int to binary
 *
 * @num: number to convert
 *
 * Return: num
 */

int int_to_binary(int num)
{
	int binary, base, remainder;

	if (num == 0)
		return (0);

	binary = 0;
	base = 1;

	while (num > 0)
	{
		remainder = num % 2;
		binary += remainder * base;
		base *= 10;
		num /= 2;
	}
	return binary;
}

/**
 * convert_binary - print the binary equivalent of the number
 *
 * @converter: list of argument
 *
 * Return: void
 */

void convert_binary(va_list converter)
{
	int num;

	num = va_arg(converter, int);
	print_num(int_to_binary(num));
}
