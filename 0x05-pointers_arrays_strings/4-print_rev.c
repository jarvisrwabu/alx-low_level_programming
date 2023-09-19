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


	/* The algorithm for reversing a string, */
/* turns out, strrev() is not a standard function */


	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
