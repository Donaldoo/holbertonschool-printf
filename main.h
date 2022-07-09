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
int print_hexadecimal(va_list arg);
/** char *reverse_string(char *s);*/
int _printf(const char *format, ...);


/**
 * Struct format - Entry point
 * @symbol: elements
 * @f: function
 */
typedef struct print
{
	char *symbol;
	int (*f)(va_list arg);
} print_t;

#endif
