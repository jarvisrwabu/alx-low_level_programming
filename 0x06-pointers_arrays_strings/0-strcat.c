#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenate two strings
 *
 * @dest: string to be appended to
 *
 * @src: string to append
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int length, i;
	/* Get the length of the source using a standard library */

	length = strlen(dest);
	/* Concatenate source to the destination */

	for (i = 0; src[i] != '\0'; i++, length++)
	{
		dest[length] = src[i];
	}
	/* Terminate the new destination string */
	dest[length] = '\0';
	return (dest);
}
