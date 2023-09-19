#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - This function reverses a string
 *
 * @s: The pointer to the string
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i, length = strlen(s);

	/* Reverse a string with this simple algorithm */

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
