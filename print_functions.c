#include "main.h"
/**
 * print_char - Function to print characters
 * @arg: list of arguments
 * Return: 1
 */
int print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_putchar(c);
	return (1);
}

/**
 * print_string - Function to print characters of a string
 * @arg: list of arguments
 * Return: 1
 */
int print_string(va_list arg)
{
	char *str;
	int i;

	str = va_arg(arg, char *);

	if (str = NULL)
		str = "(NULL)";

	for (i = 0; str[i]; i++)
		_putchar(str);
	return(1);
}
