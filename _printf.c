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
	int i, j;
	char *sep;

	i = 0;
	sep = "";

	va_start(arg, format);
	while (format && format[i] != '\0')
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(formats[j].symbol)))
		{
			j++;
		}

		if (j < 4)
		{
		/**
		 * to be continued
		 */
		}
		

