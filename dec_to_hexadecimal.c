#include "main.h"
/**
 * print_hex - function to convert decimal to lowercase hexadecimal
 * @arg: list of arguments
 * Return: length
 */

int print_hex(va_list arg)
{
	unsigned long int num = va_arg(arg, long int);
	int hexNum[50];
	int index, j, length = 0;
	char hex[] = "0123456789abcdef";
	int dec[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

	if (num == 0)
	{
		_putchar('0');
		length++;
		return (length);
	}

	for (index = 0; num != 0; index++)
	{
		hexNum[index] = num % 16;
		num = num / 16;
	}

	for (index -= 1 ; index >= 0; index--)
	{
		for (j = 0; j < 17; j++)
		{
			if (hexNum[index] == dec[j])
			{
				_putchar(hex[j]);
				length++;
				break;
			}
		}
	}
	return (length);
}


/**
 * print_Upper_hex - convert decimal to uppercase hexadecimal
 * @arg: list of arguments
 * Return: length
 */

int print_Upper_hex(va_list arg)
{
	long int num = va_arg(arg, long int);
	unsigned long int num_cpy;
	int hexNum[50];
	int index, j, length = 0;
	char hex[] = "0123456789ABCDEF";
	int dec[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

	if (num < 0)
	{
		_putchar('-');
		length++;
		num_cpy = -num;
	}
	else
		num_cpy = num;
	if (num_cpy == 0)
	{
		_putchar('0');
		length++;
		return (length);
	}
	for (index = 0; num_cpy != 0; index++)
	{
		hexNum[index] = num_cpy % 16;
		num_cpy = num_cpy / 16;
	}
	index--;
	for ( ; index >= 0; index--)
	{
		for (j = 0; j < 17; j++)
		{
			if (hexNum[index] == dec[j])
			{
				_putchar(hex[j]);
				length++;
				break;
			}
		}
	}
	return (length);
}
