#include "main.h"

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

	length = _strlen(s);
	
	for (length = 0; s[length]; length++)
	{
		for (index = 0; index < 52; index++)
		{
			if (s[length] == alphabet[index])
			{
				s[length] = rot13[index];
				break;
			}
		}
	}

	for (length = 0; s[length]; length++)
		_putchar(s[length]);

	return (length);
}
