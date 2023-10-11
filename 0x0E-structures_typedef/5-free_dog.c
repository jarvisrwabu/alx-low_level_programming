#include "dog.h"

/**
 * free_dog - free the instance of struct dog
 *
 * @d: instance to be freed
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
