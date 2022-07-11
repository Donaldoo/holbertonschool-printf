#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * Prototypes of cunctions used in this project
 */
int _putchar(char c);
int print_char(va_list arg);
int print_string(va_list arg);
int print_int(va_list arg);
void _recursion_int(int i);
int print_float(va_list arg);
int print_rot13(va_list arg);
int _strlen(char *s);
int dec_binay(va_list arg);
int rev_str(va_list arg);
int dec_binary(va_list arg);
int recursion_rev(char *str);
int print_u(va_list arg);
int print_octal(va_list arg);
int print_hex(va_list arg);
int print_Upper_hex(va_list arg);
int _printf(const char *format, ...);


/**
 * Struct print - Entry point
 * @symbol: elements
 * @f: function
 */
typedef struct print
{
	char *symbol;
	int (*f)(va_list arg);
} print_t;

#endif
