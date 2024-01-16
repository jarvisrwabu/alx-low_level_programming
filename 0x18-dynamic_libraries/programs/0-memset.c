# include <stdio.h>
# include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: a character
 * @b: a character
 * @n: an unsigned integer
 * Return: A character
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = (unsigned char)b;
	}
	return (s);
}
