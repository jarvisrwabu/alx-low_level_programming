# include <stdio.h>
# include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: 1st parameter to be compared
 * @s2: 2nd parameter to be compared
 * Return: A value either positive negative or zero
 */
int _strcmp(char *s1, char *s2)
{
	unsigned char c1, c2;

	do	{
		c1 = (unsigned char) *s1++;
		c2 = (unsigned char) *s2++;
		if (c1 == '\0')
			return (c1 - c2);
	} while (c1 == c2);
	return (c1 - c2);
}
