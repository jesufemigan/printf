#include <stdarg.h>

#ifndef MAIN_H
#define MAIN_H

typedef struct format
{
	char *format;
	void (*f)(va_list words);
} format_t;

int _putchar(char c);
int _isalpha(int c);
void convert_char(va_list);
void convert_string(va_list);
int _printf(const char *format, ...);

#endif
