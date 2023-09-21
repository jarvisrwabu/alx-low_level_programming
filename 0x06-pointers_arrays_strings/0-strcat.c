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

	length = strlen(src);
	/* Concatenate source to the destination */

	for (i = 0; dest[i] != '\0'; i++, length++)
	{
		src[length] = dest[i];
	}
	/* Terminate the source string */
	src[length] = '\0';
	return (dest);
}
