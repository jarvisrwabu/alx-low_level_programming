#include "main.h"

/**
 * print_last_digit - function that compute last digit of a number
 *@n: number to be checked
 *
 * Return: last digit of a number
 */

int print_last_digit(int n)
{

	int last_digit;

	if (n < 0)
		last_digit = ((-1 * n) % 10);
	else
		last_digit = (n % 10);

	_putchar(48 + last_digit);

	return (last_digit);


}
