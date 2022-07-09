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
		s = "(null)";
	
	for (length = 0, s[length], length++)
	{
		for (index = 0; index < 52; index++)
		{
			if (s[length] == alphabet[index])
			{
				s[length] = rot13[index];
				_putchar(s[length]);
				break;
			}
			else if (alphabet[index] == '\0')
				_putchar(s[length]);
		}
		return (length);
}
