#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all parameters
 * @n: number of arguments
 * Return: sum of passed parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	/* Define a va_list to work with variable arguments */
	va_list lst;

	va_start(lst, n);
	/* Loop through variable arguments and add them to sum */

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{

		int p = va_arg(lst, const unsigned int);

		sum += p;
		}
	}
	/* Clean up memory assigned to va_list */
	va_end(lst);
	return (sum);
}
