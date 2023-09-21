#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenate n bytes to destination string
 *
 * @dest: string to be appended to
 *
 * @src: string to append
 *
 * @n: append n number of bytes(chars)
 *
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int length, i;
	/* Get the length of the source using a standard library */

	length = strlen(dest);
	/* Concatenate source to the destination */
	/* with atmost bytes n */

	for (i = 0; src[i] != '\0' && i < n ; i++, length++)
	{
		dest[length] = src[i];
	}
	/* Terminate the new destination string */
	dest[length] = '\0';
	return (dest);
}
