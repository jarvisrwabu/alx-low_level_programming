#include "main.h"

/**
 * print_numbers - This function prints numbers from 0 to 9
 *
 *
 * Return: Does not return any value
 */

void print_numbers(void)
{

	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
