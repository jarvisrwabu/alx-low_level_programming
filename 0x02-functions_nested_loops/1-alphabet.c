#include "main.h"


/**
 * print_alphabet - This function prints the alphabet in lower case
 *
 * Return: No return value (void)
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
