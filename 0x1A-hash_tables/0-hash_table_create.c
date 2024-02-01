#include "hash_tables.h"

/**
 * hash_table_create - Create a Hash table
 * @size: Size of the array
 * Return: pointer to the Hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i; /* For the for loop*/
	/*Allocate some memory for the table and array of pointers*/

	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->array = (hash_node_t **)malloc(size * sizeof(hash_node_t *));

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	/*Initialize the size and give it some value*/
	table->size = size;

	/*Initialize each element of array with NULL*/
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);

}
