#include "main.h"
/**
 *
 *
 *
 */

int _printf(const char *format, ...)
{
	va_list arg;

	format_t formats[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"f", print_float},
		{NULL, NULL}
	};
