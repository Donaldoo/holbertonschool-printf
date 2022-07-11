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
	/**char dec[] = "01234567";
	int oct[] = {0, 1, 2, 3, 4, 5, 6, 7};*/

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
	/**	for (j = 0; j < 8; j++)
		{ 
			if (decNum[index] == dec[j])
			{
				_putchar(oct[j]);
				length++;
				break;
			}
		}
	}*/
	return (length);
}

/**
 * print_unsignedint - Function to print positive numbers
 * @arg: list of arguments
 * Return: i
 */
int print_unsignedint(va_list arg)
{
	unsigned int i, len = 0;
	unsigned int nr = 0;
	
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
