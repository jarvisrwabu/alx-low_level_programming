#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest:  the final value
 * @src:  the one that will be appended to
 * Return: The appended value
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
	}
	for (j = 0; *(src + j) != '\0'; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
