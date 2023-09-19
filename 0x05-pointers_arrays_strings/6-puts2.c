#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - This function prints every other character in the string
 *
 * @str: The pointer to the string
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int i, length = strlen(str);

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
