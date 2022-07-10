#include "main.h"

/**
 * print_rot13 - prints rot13'ed string
 * @arg: List of arguments
 * Return: string length
 */
int print_rot13(va_list arg)
{
	int index, length = 0;
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(arg, char *);
	char *s_cpy;

	if (s == NULL)
		return (-1);

	length = _strlen(s);
	s_cpy = malloc(1 + sizeof(char) * length);
	if (s_cpy == NULL)
		return (-1);

	for (index = 0; s[index]; index++)
		s_cpy[index] = s[index];

	for (length = 0; s_cpy[length]; length++)
	{
		for (index = 0; index < 52; index++)
		{
			if (s_cpy[length] == alphabet[index])
			{
				s_cpy[length] = rot13[index];
				break;
			}
		}
	}

	for (length = 0; s_cpy[length]; length++)
		_putchar(s_cpy[length]);

	return (length);
}
