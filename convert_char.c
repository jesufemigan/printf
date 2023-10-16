#include "main.h"
#include <stdarg.h>

/**
 * convert_char - convert the %c in printf
 *
 * @converter: list fo args
 *
 * Return: int
 */

int convert_char(va_list converter)
{
	return (_putchar(va_arg(converter, int)));
}
