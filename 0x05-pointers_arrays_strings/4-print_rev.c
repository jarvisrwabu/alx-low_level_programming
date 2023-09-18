#include "main.h"
#include <string.h>

/**
 * print_rev - This function reverses a string
 *
 * @s: The pointer to the string
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i, length = strlen(s);
	int middle = length / 2;
	char temp;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
