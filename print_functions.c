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
 */

int print_int(va_list arg)
{
	int i = 1, len = 0;
	unsigned int nr = 0;

	nr = va_arg(arg, int);
	len = nr;

	if (len < 0)
	{
		_putchar('-');
		len = len * (-1);
		nr = len;
		i += 1;
	}

	while (nr > 9)
	{
		nr = nr / 10;
		i++;
	}
	_recursion_int(len);
	return (i);
}

/**
 * _recursion_int - function to print an int
 * @i: intiger
 */
void _recursion_int(int i)
{
	unsigned int n;

	n = i;
	if (n / 10)
		_recursion_int(n / 10);
	_putchar(n % 10 + '0');
}


/**
 * print_R - prints rot13'ed string
 * @arg: List of arguments
 * Return: string length
 */
int print_rot13(va_list arg)
{
	int index, length = 0;
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(arg, char *);

	if (s == NULL)
		return (-1);

	while (s[length])
	{
		for (index = 0; index < 52; index++)
		{
			if (s[length] == alphabet[index])
			{
				s[length] = rot13[index];
				_putchar(s[length]);
				break;
			}
			else if (alphabet[index + 1] == '\0')
			{
				_putchar(s[length]);
			}
		}
		length++;
	}
	return (length);
}





















