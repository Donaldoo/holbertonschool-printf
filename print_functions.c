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

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_int - Function to print numbers
 * @arg: list of arguments
 * Return: i
 *

int print_int(va_list arg)
{
	int i, len = 0;
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
}*/

int print_int(va_list arg)
{
	int num = va_arg(arg, int);
	unsigned int uNum;
	int i = 0, len = 0;
	char store[11];

	if (num < 0)
	{
		_putchar('-');
		len++;
		uNum = -num;
	}
	else
		uNum = num;
	if (uNum == 0)
	{
		_putchar('0');
		len++;
	}
	if (uNum > 0)
	{
		while (uNum != 0)
		{
			store[i] = (uNum % 10) + '0';
			uNum /= 10;
			i++;
		}
		i -= 1;
		while (i >= 0)
		{
			_putchar(store[i]);
			len++;
			i--;
		}
	}
	return (len);
}

/**
 * _recursion_int - function to print an int
 * @i: intiger
 */
void _recursion_int(int n)
{
	unsigned int i;

	i = n;
	if (i / 10)
		_recursion_int(i / 10);
	_putchar(i % 10 + '0');
}
