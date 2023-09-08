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
	int ch;

	while (count < 10)
	{
		putchar('0' + count);
		count++;
	}

	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
