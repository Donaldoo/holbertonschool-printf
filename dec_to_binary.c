#include "main.h"
/**
 * dec_binary - Function that coverts decimal numbers to binary
 * @arg: argument count
 * Return: length
 */
int dec_binary(va_list arg)
{
	int n, i = 0, j, length, index = 0;
	int binNum[50];

	n = va_arg(arg, int);
	
	while (n > 0)
	{
		binNum[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binNum[index++]);
	}

	length = 0;
	while(binNum[length])
		length++;
	return (length);
}
