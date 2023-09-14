#include "main.h"
#include <ctype.h>

/**
 * _isdigit - This function checks if the character is in uppercase
 *
 * @c: The parameter to check
 *
 * Return: Return 1 if its a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
