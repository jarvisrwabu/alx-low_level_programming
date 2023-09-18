#include "main.h"
#include <string.h>

/**
 * _strlen - This function returns the length of a string
 *
 * @s: The pointer to the string
 *
 * Return: Returns the length of a string
 */

int _strlen(char *s)
{
	int length;

	length = strlen(*s);
	return (length);
}
