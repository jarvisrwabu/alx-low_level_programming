#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - This function reverses a string
 *
 * @s: The pointer to the string
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i;
	int length = strlen(s);
	char temp;
	/* This is the basic algorithm for reversing */
	/* a string by swapping and using a temp holder */

	for (i = 0; i  < length / 2; i++)
	{

		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}

