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

int print_int(__attribute__((unused))va_list arg)
{
	/**
	int i = 0;
	int arr[100];
	int index = 0;
	int len = va_arg(arg, int);

	while (len < 9)
	{
		arr[index] = len % 10;
		index++;
		len = (len / 10);
	}
	arr[index] = len;
	while (arr[i] !='\0')
		i++;

	if (n < 0)
	{
		_putchar('-');
		len = -len;
	}
	return (i);
	**/
	return (0);
}



int print_float(__attribute__((unused))va_list arg)
{
	return (0);
}
