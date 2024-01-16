#include <stdio.h>
/**
 * _atoi - converts character to string
 * @s: a character
 * Return: a character
 */
int _atoi(char *s)
{
	int res = 0;
	int i;

	for (i = 0; *s != '\0'; ++i)
		res = res * 10 + s[i] - '0';
	return res;
}
