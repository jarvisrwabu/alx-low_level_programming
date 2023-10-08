#include <stdlib.h>
#include "main.h"

/**
 * array_range - create array of integers
 * @min: start range from
 * @max: end range at
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int n = (max - min + 1);

	if (min > max) /* validate the input */
		return (NULL);

	/* malloc and check for presence of error */
	ptr = malloc(sizeof(int) * n);
	if (ptr == NULL)
		return (NULL);

	/* set the values */
	for (i = 0; i < n; i++)
		ptr[i] = min++;

	return (ptr);
}
