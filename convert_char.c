#include "main.h"
#include <stdarg.h>

/**
 * convert_char - convert the %c in printf
 *
 * @converter: list fo args
 *
 * Return: void
 */

void convert_char(va_list converter)
{
	_putchar(va_arg(converter, int));
}
