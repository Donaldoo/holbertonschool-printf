#include "main.h"
/**
 * _strlen - Funnction to find the length of a string
 * @s: pointer to string
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}

