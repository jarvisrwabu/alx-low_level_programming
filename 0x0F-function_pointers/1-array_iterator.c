#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Execute a function given as a
 * parameter on each array element
 *
 * @array: pointer to an array of integers
 *
 * @size: Size of array
 *
 * @action: A function pointer that takes an integer
 * as an argument and returns void
 *
 * Return: Does not return anything
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
