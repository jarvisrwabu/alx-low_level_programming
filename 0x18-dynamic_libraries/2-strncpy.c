# include <stdio.h>
# include "main.h"
/**
 * _strncpy - copies a string
 * @dest: the one that the copied is transferred to
 * @src: The one being copied
 * @n: size of the bits
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
