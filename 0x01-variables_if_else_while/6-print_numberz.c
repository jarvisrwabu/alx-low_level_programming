#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count = 0;

	while (count < 10)
	{
		putchar('0' + count);
		count++;
	}
	putchar('\n');
	return (0);
}
