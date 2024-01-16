# include <stdio.h>
# include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: Place to find
 * @needle: what to find
 * Return: Character
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *Begin = haystack;
		char *pattern = needle;

		while (*haystack && *needle && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if (!*pattern)
			return (Begin);
		haystack = Begin + 1;
	}
	return (NULL);
}
