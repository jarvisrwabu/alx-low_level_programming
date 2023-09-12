#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that print whole number from n to 98
 * @n: staring integer for function to work on
 */

void print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
		printf("\n");
	}

	if (n < 98 && n >= 0)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
		printf("\n");

	}

	if (n < 0)
	{

		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
		}

		printf("\n");
	}
}
