# include <stdio.h>
# include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: character that is taken to account
 * @c:  character to be located
 * Return: A character
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
