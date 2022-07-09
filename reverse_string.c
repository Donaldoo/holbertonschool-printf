#include "main.h"
/**
 * rev_str - Fuction to reverse string
 * @arg: argument count
 * Return: rev
 */
char rev_str(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	return (recursion_rev(str));
}

/**
 * recursion_rev - function to print string in reverse
 * @str: string to be reversed
 * Return: 0
 */

int recursion_rev(char *str)
{
	int i = 0;

	if (*str != '\0')
	{
		rev_str(str[0] + 1);
		_putchar(str[i++]);
	}
	return (0);
}







