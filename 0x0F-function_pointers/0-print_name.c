#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: name to print
 * @f: The function
 * Return: Does not return anything
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		(*f)(name);
	}
}
