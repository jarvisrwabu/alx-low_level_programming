#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - copies a string
 *
 * @dest: string to be copied to
 *
 * @src: string to copy
 *
 * @n: append n number of bytes(chars)
 *
 * Return: concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy source to the destination */
	/* with atmost bytes n */

	for (i = 0; src[i] != '\0' && i < n ; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
