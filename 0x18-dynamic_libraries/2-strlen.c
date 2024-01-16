# include <stdio.h>
/**
 * _strlen - finds the length of a string
 * @s: String character for length
 * Return: String length
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
