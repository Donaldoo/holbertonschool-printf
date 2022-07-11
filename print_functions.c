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
 * print_string - Function to print a string
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

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_int - Function to print numbers
 * @arg: list of arguments
 * Return: length
 */

int print_int(va_list arg)
{
	int i = 0, len = 1;
	unsigned int nr = 0;

	nr = va_arg(arg, int);
	i = nr;

	if (i < 0)
	{
		_putchar('-');
		i = i * (-1);
		nr = i;
		len++;
	}

	while (nr > 9)
	{
		nr = nr / 10;
		len++;
	}
	_recursion_int(i);
	return (len);
}

/**
 * _recursion_int - function to print an int
 * @i: integer
 */
void _recursion_int(int i)
{
	unsigned int n;

	n = i;
	if (n / 10)
		_recursion_int(n / 10);
	_putchar(n % 10 + '0');
}
