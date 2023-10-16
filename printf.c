#include <stddef.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - function that prints formatted string
 *
 * @format: format of character
 *
 * Return: number of charcters printed
 */

int _printf(const char *format, ...)
{
	format_t converter[] = {
		{"c", convert_char},
		{"s", convert_string},
		{NULL, NULL}
	};
	int j, i = 0;
	va_list words;
	va_start(words, format);

	while (format && format[i])
	{
		if ((format[i] != '%'))
		{
			_putchar(format[i]);
		}
		else
		{
			format++;
			j = 0;

			while (converter[j].format)
			{
				if (format[i] == converter[j].format[0])
				{
					converter[j].f(words);
				}
				j++;
			}

		}
		i++;
	}
	return (0);
}
