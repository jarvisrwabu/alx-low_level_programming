#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 1 ; j < 10 ; j++)
		{

			putchar('0' + i);
			putchar('0' + j);
			if (i != 9 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}

		}
}

	putchar('\n');
	return (0);
}
