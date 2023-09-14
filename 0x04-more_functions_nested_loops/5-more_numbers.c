#include "main.h"

/**
 * print_numbers - This function prints numbers from 0 to 9
 *
 *
 * Return: Does not return any value
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar('0' + j);
		}
		_putchar('\n);
	}

