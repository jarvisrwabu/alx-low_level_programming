# include <stdio.h>
# include "main.h"
/**
 * _strncat - concatenates 2 strings according to src
 * @dest: the final
 * @src: one to bbe concatanated
 * @n: no of bytes to concatenate
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
