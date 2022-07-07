#include "main.h"
/**
 *
 *
 *
 */

int _printf(const char *format, ...)
{
	va_list arg;
	unsigned int c = 0;
	char_nr = 0;

	if (!format)
		return (-1);
	 va_start(arg, format);
	 for (i = 0; format[c] != '\0'; i++)
	 {
		 if (format[c] =='%')
		 { 
			 if (format[c + 1] == '\0')
				 return (-1);
			 else if (format[c + 1] == '%')
			 {
				 _putchar('%');
				 char_nr++;
				 i++;
			 }

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
		

