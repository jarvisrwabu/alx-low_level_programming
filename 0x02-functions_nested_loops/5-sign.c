#include "main.h"

/**
 * print_sign - checks for the sign of a number
 * @n: The character to check
 *
 * Return: If positive 1.
 * if equals to zero 0
 * Otherwise returns -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
