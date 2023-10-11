#include <stdio.h>
#include "dog.h"

/**
 * print_dog - initialize a variable of type struct dog
 *
 * @d: pointer to structure variable
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return; /* Print nothing if d is NULL */
	}

	printf("Name: ");
	if (d->name != NULL)
	{
		printf("%s\n", d->name);
	}
	else
	{
		printf("(nil)\n");
	}

	printf("Age: %f\n", d->age); /* No NULL case Here */

	printf("Owner: ");
	if (d->owner != NULL)
	{
		printf("%s\n", d->owner);
	}
	else
	{
		printf("(nil)\n");
	}
}
