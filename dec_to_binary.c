#include "main.h"
/**
 * dec_binary - Function that coverts decimal numbers to binary
 * @arg: argument count
 * Return: length
 */
int dec_binary(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int length = 0, index = 0;
	unsigned int arr[31];

	if (num == 0)
	{
		(_putchar('0'));
		length++;
	}
	else
	{
		while (num != 0)
		{
			arr[index] = (num % 2);
			num /= 2;
			index++;
		}

		for (index -= 1; index >= 0; index--)
		{
			_putchar(arr[index] + '0');
			length++;
		}
	}
	return (length);
}
