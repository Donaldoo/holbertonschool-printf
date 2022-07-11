#include "main.h"
/**
 * print_octal - function to convert decimal to octal
 * @arg: list of arguments
 * Return: length
 */

int print_octal(va_list arg)
{
	unsigned long int num = va_arg(arg, long int);
	int store_num[100];
	int index, length = 0;

	if (num == 0)
	{
		_putchar('0');
		length++;
		return (length);
	}

	for (index = 0; num != 0; index++)
	{
		store_num[index] = num % 8;
		num = num / 8;
	}
	for (index -= 1 ; index >= 0; index--)
	{
		_putchar(store_num[index] + '0');
		length++;
	}

	return (length);
}

/**
 * print_u - Function to print positive numbers
 * @arg: list of arguments
 * Return: i
 */
int print_u(va_list arg)
{
	unsigned int len = 1, i;
	unsigned int nr;

	nr = va_arg(arg, unsigned int);
	i = nr;

	if (i == 0)
	{
		_putchar('0');
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
