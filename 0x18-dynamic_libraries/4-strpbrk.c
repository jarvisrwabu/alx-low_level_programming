# include <stdio.h>
#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: Character to be scanned
 * @accept: Character to be matched
 * Return: Character
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	int pos = 0;
	int flg = 0;

	while (*(s + i))
		i++;
	pos = i;
	i = 0;
	while (*(accept + i))
	{
		j = 0;
		while (*(s + j))
		{
			if (accept[i] == s[j])
			{
				if (j <= pos)
				{
				pos = j;
				flg = 1;
				}
			}
			j++;
		}
		i++;
	}
	if (flg == 1)
		return (&s[pos]);
	return (NULL);
}
