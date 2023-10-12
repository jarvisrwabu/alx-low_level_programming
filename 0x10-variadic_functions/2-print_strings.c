#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings supplied as variable arguments
 * @n: number of arguments
 * @separator: separator between the strings
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	/* Define va_list to work with variable arguments */
	va_list lst;

	va_start(lst, n);

	/* Loop through the arguments and print them */

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(lst, char *);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s%s", str, separator);
		}
		else if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
	}
	printf("\n");
	/* Free memory assigned to va_list */
	va_end(lst);
}
