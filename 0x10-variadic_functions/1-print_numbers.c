#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints all numbers passed to it as variable arguments
 * @n: number of arguments
 * @separator: separator between the numbers
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	/* Define va_list to work with variable arguments */
	va_list lst;

	va_start(lst, n);

	/* Loop through the arguments and print them */

	for (i = 0; i < n; i++)
	{
		int p = va_arg(lst, const unsigned int);

		if (i < n - 1 && separator != NULL)
		{
			printf("%d%s", p, separator);
		}
		else
		{
			printf("%d", p);
		}
	}
	printf("\n");
	/* Free memory allocated for va_lst */
	va_end(lst);
}
