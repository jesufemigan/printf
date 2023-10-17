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
		{"d", convert_signed_int},
		{"i", convert_signed_int},
		{"b", convert_binary},
		{"o", convert_octal},
		{"u", convert_unsigned_int},
		{"x", convert_hex_lower},
		{"X", convert_hex_upper},
		{"S", convert_special_string},
		{NULL, NULL}
	};
	int j, count = 0, i = 0;
	va_list words;
	va_start(words, format);

	while (format && format[i])
	{
		if ((format[i] != '%'))
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			format++;

			if (format[i] == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				j = 0;

				while (converter[j].format)
				{
					if (format[i] == converter[j].format[0])
					{
						count += converter[j].f(words);
					}
					j++;
				}
			}

		}
		format++;
	}
	_putchar(BUF_FLUSH);
	va_end(words);
	return (count);
}
