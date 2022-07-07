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

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_int - Function to print numbers
 * @arg: list of arguments
 * Return: len
 */

int print_int(__attribute__((unused))va_list arg)
{
	int n, i = 1, len = 0;
	unsigned int nr;

	n = va_arg(arg, int);

	if (n < 0)
	{
		_putchar('-');
		nr = n * (-1);
		len++;
	}
	else
		nr = n;
	while (nr / i > 9)
		i *= 10;
	while (i != 0)
	{
		len += _putchar(nr / i + '0');
		nr = nr % i;
		i /= 10;
	}
	return (len);
}





int print_float(__attribute__((unused))va_list arg)
{
	return (0);
}
