#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * _printf - entry point
 * @format: arg
 * Return: len
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i, j, flag = 0, len = 0;

	print_t print[] = {
		{"c", print_char}, {"s", print_string}, {"d", print_int}, {"f", print_float},
		{NULL, NULL}
	};
	va_start(arg, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (0);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			j = 0;
			while (print[j].symbol != NULL)
			{
				if (format[i + 1] == print[j].symbol[0])
				{
					len = len + print[j].f(arg);
					i++;
					flag = 1;
				}
				j++;
			}
			if (flag == 0)
			{
				_putchar(format[i]);
				len+=1;
			}
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			i++;
			len+=1;
		}
		else
		{
			_putchar(format[i]);
			len+=1;
		}
		i++;
	}
	va_end(arg);
	return (len);
}
