#include "main.h"
#include <ctype.h>

/**
 * _isupper - This function checks if the character is in uppercase
 *
 * @c: The character to check
 *
 * Return: Return 1 if its uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
