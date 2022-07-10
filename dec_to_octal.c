#include "main.h"
/**
 * print_octal - function to convert decimal to octal
 * @arg: list of arguments
 * Return: length
 */

int print_octal(va_list arg)
{
	unsigned long int num = va_arg(arg, long int);
	int decNum[100];
	int index, j, length = 0;
	char oct[] = "0123456789";
	int dec[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};

	if (num == 0)
	{
		_putchar('0');
		length++;
		return (length);
	}

	for (index = 0; num != 0; index++)
	{
		decNum[index] = num % 8;
		num = num / 8;
	}
	index--;
	for ( ; index >= 0; index--)
	{
		for (j = 0; j < 9; j++)
		{
			if (decNum[index] == dec[j])
			{
				_putchar(oct[j]);
				length++;
				break;
			}
		}
	}
	return (length);
}

/**
 * print_unsignedint - Function to print positive numbers
 * @arg: list of arguments
 * Return: i
 */

int print_unsignedint(va_list arg)
{
        unsigned int i = 1, len = 0;
        unsigned int nr = 0;

        nr = va_arg(arg, unsigned int);
        len = nr;

        if (len == 0)
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
