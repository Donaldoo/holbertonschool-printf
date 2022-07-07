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
 * Return: 1
 */

int print_int(va_list arg)
{
	int i = 0;
	int arr[100];
	int len = va_arg(arg, int);

	if (len < 0)
	{
		_putchar('-');
		len *= -1;
	}

	for (i = 0; i < 100 && len != 0; i++)
	{
		arr[i] = len % 10;
		len = len / 10;
	}
	for ( ; i >= 0; i--)
		_putchar(arr[i] + '0');

	return (len);
}



int print_float(__attribute__((unused))va_list arg)
{
	return (0);
}
