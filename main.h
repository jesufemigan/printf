#include <stdarg.h>

#ifndef MAIN_H
#define MAIN_H

typedef struct format
{
	char *format;
	void (*f)(va_list words);
} format_t;

int _putchar(char c);
void convert_char(va_list);
void convert_string(va_list);
void print_num(int);
void convert_int(va_list);
int int_to_binary(int);
void convert_binary(va_list);
int _printf(const char *format, ...);

#endif
