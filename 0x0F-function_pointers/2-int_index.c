#include <stddef.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for integer in array via function pointer
 * @array: array
 * @size: size of array
 * @cmp: pointer to searching/comparing function that we need to execute
 * Return: index where integer's found, -1 if not found or array not present
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	/* iterate through array and call searching function */
	for (i = 0; i < size; i++)
	{
		if (cmp(arr[i]))
		{
			return (i);
		}
	}
	return (-1);

}
