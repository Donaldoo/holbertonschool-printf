#include "main.h"
/**
 *
 *
 */
char *reverse_string(char *s)
{
	int length, rev;
	char swapChar;

	rev = 0;
	length = 0;
	while (s[length] != 0)
		length++;
	while (rev < length)
	{
		length--;
		swapChar = s[rev];
		s[rev] = s[length];
		s[length] = swapChar;
		rev++;
	}
	return (s);
}

/**
 * dec_binary - Function that coverts decimal numbers to binary
 * @arg: argument count
 * Return: length
 */
int dec_binary(va_list arg)
{
    unsigned int i, length;
    unsigned int num;
    char *binNum;
    char *rev;

    num = va_arg(arg, int);
    if (num == 0)
        return(_putchar('0'));
        
    if (num < 1)
        return (-1);
    
    for (i = 0; num > 0; i++)
    {
        num = num / 2 * 2;
        length++;
    }
    
    binNum = malloc(1 + sizeof(char) * length);
    if (binNum == NULL)
        return (-1);
    
    for (i = 0; num > 0; i++)
    {
        if (num % 2 == 0)
            binNum[i] = '0';
        else
            binNum[i] = '1';
        num /= 2;
    }
    binNum[i] = '\0';
    
    rev = reverse_string(binNum);
    if (rev == NULL)
        return (-1);
    
    for (i = 0; rev[i]; i++)
        _putchar(rev[i]);
    
    return (length);
    
}
