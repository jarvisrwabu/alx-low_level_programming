#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - This function prints half of a string
 *
 * @str: The pointer to the string
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i, length = strlen(str);
	int middle = length / 2;

	if (length % 2 != 0)
	{
		for (i = middle + 1; i < length; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}

	else
	{
		for (i = 0; i < middle; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
