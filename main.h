#include <stdarg.h>

#ifndef MAIN_H
#define MAIN_H

#define BUF_SIZE 1024
#define BUF_FLUSH -1

typedef struct format
{
	char *format;
	int (*f)(va_list words);
} format_t;

int _putchar(int c);
int convert_char(va_list);
int convert_string(va_list);
int convert_special_string(va_list);
int print_num(int);
int convert_signed_int(va_list);
int convert_unsigned_int(va_list);
int int_to_binary(int);
int convert_binary(va_list);
int convert_octal(va_list);
int int_to_hex(int, int);
int convert_hex_lower(va_list);
int convert_hex_upper(va_list);
int _printf(const char *format, ...);

#endif
