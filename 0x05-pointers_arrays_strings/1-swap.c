#include "main.h"

/**
 * swap_int - This function checks if the character is in uppercase
 *
 * @a: The first integer
 * @b: The second integer
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp = 0; /* The swap algorithm needs a temporary value holder */

	temp = *a;
	*a = *b;
	*b = temp;
}
