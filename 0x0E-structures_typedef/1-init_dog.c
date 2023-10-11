#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: pointer to structure variable
 *
 * @name: member
 *
 * @age: member
 *
 * @owner: member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return; /* Handle invalid pointer */
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
