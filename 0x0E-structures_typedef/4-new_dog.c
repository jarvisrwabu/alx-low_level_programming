#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * len - find length of string
 * @str: string
 * Return: length
 */
int len(char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
		;
	return (i);
}
/**
 * strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of original source
 */
char *strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= len(src); i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * new_dog - create new instance of the struct dog
 * @name: member
 * @age: member
 * @owner: member
 * Return: initialized instance of the struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *adog;
	char *copy_name;
	char *copy_owner;

	adog = malloc(sizeof(dog_t));
	/* validate memory allocated to adog */
	if (adog == NULL)
	{
		return (NULL);
	}

	adog->age = age; /* Initialize age member */
	/* make copies of struct members and validate or else free on error */
	/* set values of struct members to copies of arguments or set to NULL */
	if (name != NULL)
	{
		copy_name = malloc(len(name) + 1);
		if (copy_name == NULL)
		{
			free(adog);
			return (NULL);
		}
		adog->name = strcpy(copy_name, name);
	}
	else
		adog->name = NULL;
	if (owner != NULL)
	{
		copy_owner = malloc(len(owner) + 1);
		if (copy_owner == NULL)
		{
			free(copy_name);
			free(adog);
			return (NULL);
		}
		adog->owner = strcpy(copy_owner, owner);
	}
	else
		adog->owner = NULL;
	return (adog);
}
