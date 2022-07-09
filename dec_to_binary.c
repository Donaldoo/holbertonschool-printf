#include "main.h"
/**
 *
 *
 */
/**char *reverse_string(char *s)
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
}**/
/**
char *reverse_string(char *s)
{
        int i = 0;

        if (*s != '\0')
        {
                recursion_rev(s + 1);
                _putchar(s[i++]);
        }
        return (0);
}
*/


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
	    index--;
	    while (index >= 0)
	    {
		    _putchar(arr[index] + '0');
		    index--;
		    length++;
	    }
    }
    return (length);
}

        
/**     (num < 1)
        return (-1);
    
    for (i = 0; num > 0; i++)
    {
        num = num / 2;
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
    
}*/
