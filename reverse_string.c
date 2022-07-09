#include "main.h"
/**
 * rev_str - Fuction to reverse string
 * @arg: argument count
 * Return: rev
 */
int rev_str(va_list arg)
{
	int index, rev_index, length;
	char *str;
	char *rev;	

	str = va_arg(arg, char *)
	if (str == NULL)
		str = "(null)";

	length = _strlen(str);

	rev = malloc(1 + sizeof(char) * length);
	if (rev == NULL)
		rev = (NULL);

	for (index = length - 1; index >= 0; index--)
	{
		rev[rev_index] = str[index];
		_putchar(rev[rev_index]);
		rev_index++;
	}
	return (length);
}





