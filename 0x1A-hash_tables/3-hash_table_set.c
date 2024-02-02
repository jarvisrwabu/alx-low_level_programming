#include "hash_tables.h"

/**
 * free_node - Free memory
 * @node: A single node of the hash table
 *
 * Return: Returns nothing(void)
 */
void free_node(hash_node_t *node)
{
	/*Free up memory*/
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * create_node - Create node of a hash table
 * @key: string used to generate hash value
 * @value: Value pointed by the key
 *
 * Return: Pointer to created node
 */

hash_node_t *create_node(char *key, char *value)
{
	/*Allocate some memory for the node */
	hash_node_t *node = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (node == NULL)
	{
		fprintf(stderr, "Memory allocation failed for hash node\n");
		exit(EXIT_FAILURE);
	}

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	return (node);
}

/**
 * is_hash_table_full - Check if a hash table is full.
 * @ht: The hash table to check.
 * Return: 1 if full, 0 otherwise.
 */
int is_hash_table_full(const hash_table_t *ht)
{
	if (ht == NULL || ht->array == NULL)
		return (0);

	unsigned long int i;
	unsigned long int count = 0;

	for (i = 0; i < ht->size; ++i)
	{
		hash_node_t *current = ht->array[i];

		while (current != NULL)
		{
			count++;
			current = current->next;
		}
	}

	return (count >= ht->size);
}

/**
 * hash_table_set - Insert an element to the hash table
 * @key: Key for the node
 * @value: The value associated to the key
 * @ht: Pointer to hash table
 * Return: 1 if Successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element = create_node(key, value);
	unsigned long int index = hash_djb2(key); /*Get the index*/

	hash_node_t *current_element = ht->array[index];

	if (current_element == NULL) /*Key does not exist*/
	{
		if (is_hash_table_full(ht) == 1) /*Hash table is full*/
		{
			printf("Hash table is full!\n");
			free_node(element);
			return (0);
		}
		/*Insert directly*/
		ht->array[index] = element;
		return (1);
	}
	else
	{
		if (strcmp(current_element->key, key) == 0)
		{
			/* Case 1: Just update the value */
			strcpy(ht->array[index]->value, value);
			return (1);
		}
		else
		{
			/* Case 2: There is a Collision */
			element->next = current_element;
			ht->array[index] = element;
			return (1);

		}
	}

}
