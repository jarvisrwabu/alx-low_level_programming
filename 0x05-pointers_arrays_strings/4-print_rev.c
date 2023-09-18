#include "main.h"
#include <stdio.h>
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
	char copy[length + 1];

	strcpy(copy, s);
	int middle = length / 2;
	char temp;

	/* The algorithm for reversing a string, */
/* turns out, strrev() is not a standard function */

	for (i = 0; i < middle; i++)
	{
		temp = copy[i];
		copy[i] = copy[length - i - 1];
		copy[length - i - 1] = temp;
	}

	for (i = 0; i < length; i++)
	{
		_putchar(copy[i]);
	}
	_putchar('\n');

}
