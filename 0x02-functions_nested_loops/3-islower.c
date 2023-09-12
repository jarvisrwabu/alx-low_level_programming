#include "main.h"


/**
 * _islower - checks for lowercase character
 * @c: The character to check
 *
 * Return: If lowercase 1.
 * Otherwise returns 0
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
