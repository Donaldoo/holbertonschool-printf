#include "main.h"
/**
 *
 *
 *
 */

int _printf(const char *format, ...)
{
	va_list arg;
	unsigned int i, j;
	unsigned int flag = 0;
	unsigned int len = 0;

	print_t print[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"f", print_float},
	};
	va_start(arg, format);
	
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (0);
	
	i = 0;

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			j = 0;
			while (

		}
		if (format[i] == '%' && format [i + 1] == '%')
		{
			_putchar('%');
			len++;
			i++;
		}
		else if (format[i])
		{
			_putchar(format[i]);
			len++;
		}
		i++;
	}
