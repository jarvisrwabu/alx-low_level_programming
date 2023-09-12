#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to get the last digit of
 *
 * Return: The last digit of the number
 *
 */

int print_last_digit(int n)
{
	int p;

	p = n % 10;
	_putchar('0' + p);
	return (p);
}
