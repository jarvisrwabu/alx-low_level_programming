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
	int middle = length / 2;

	if (length % 2 != 0)
	{
		for (i = middle + 1; i < length; i++)
		{
			_putchar(s[i]);
		}
		_putchar('\n');
	}

	else
	{
		for (i = 0; i < middle; i++)
		{
			_putchar(s[i]);
		}
		_putchar('\n');

}
