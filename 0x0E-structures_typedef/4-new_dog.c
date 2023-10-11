#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create new instance of struct dog
 *
 * @name: member
 *
 * @age: member
 *
 * @owner: member
 *
 * Return: initialized instance of struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* Check if input pointers are NULL */
	if (name == NULL || owner == NULL)
	{
		return (NULL); /* Return NULL if fails */
	}

	/* Allocate memory for new dog construct */

	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));
	/* Check if memory allocation is successful */
	if (newDog == NULL)
	{
		return (NULL);
	}

	/* Create copies of name and owner */
	newDog->name = strdup(name); /* Duplicate name */
	newDog->owner = strdup(owner); /* Duplicate owner */
	newDog->age = age;
	return (newDog);
}
