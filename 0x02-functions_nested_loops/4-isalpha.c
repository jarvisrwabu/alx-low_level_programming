#include "main.h"

/**
 * _isalpha - checks for lowercase character
 * @c: The character to check
 *
 * Return: If lowercase 1.
 * Otherwise returns 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
