#include "main.h"

/**
 * print_line - This function prints a straight line n number of times
 * @n: Number of times to print a straight line
 *
 * Return: Does not return any value
 */

void print_line(int n)
{
	int p;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (p = 1; p <= n; p++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
