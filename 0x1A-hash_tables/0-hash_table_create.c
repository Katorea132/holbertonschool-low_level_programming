#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table of size "size"
 * @size: Holds the size
 * Return: EIther the hash table or null
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ret;

	if (size == 0)
		return (0);
	ret = calloc(1, sizeof(hash_table_t));
	if (!ret)
		return (0);
	ret->size = size;
	ret->array = calloc(size, sizeof(hash_node_t *));
	if (!ret->array)
	{
		free(ret);
		return (0);
	}
	return (ret);
}
