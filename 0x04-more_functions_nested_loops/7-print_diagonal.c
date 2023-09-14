#include "main.h"

/**
 * print_diagonal - This function prints a straight line n number of times
 * @n: Number of slashes to print on the screen
 *
 * Return: Does not return any value
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 2; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
