#include "hash_tables.h"

/**
 * key_index - Return the index of the hash value
 * @key: string used to generate hash value
 * @size: size of the array of hash table
 *
 * Return: index of hash value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (hash % size);

}
