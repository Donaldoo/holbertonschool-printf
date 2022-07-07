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
 * Return: (i)
 */
int print_string(va_list arg)
{
	char *str;
	int i;

	str = va_arg(arg, char *);

	if (str = NULL)
		str = "(NULL)";

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_int - Function to print numbers
 * @arg: list of arguments
 * Return: 1
 */

int print_int(va_list arg)
{
	int n = va_arg(arg, int);
	
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 > 0)
		print_int(n/10);
	_putchar(n % 10 + '0');
	return (1);
}






