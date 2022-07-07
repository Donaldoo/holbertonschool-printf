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
int print_float(va_list arg);
int _printf(const char *format, ...)
int(*func_p(const char f))(va_list arg);
/**
 * Struct format - Entry point
 * @symbol: elements
 * @f: function
 */

typedef struct print
{
	char *symbol;
	void (*f)(va_list arg);
} print_t;

#endif
