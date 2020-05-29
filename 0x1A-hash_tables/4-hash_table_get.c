#include "hash_tables.h"

/**
 * hash_table_get - Gets a value
 * @ht: Holds the table
 * @key: Holds the key
 * Return: the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *head = 0;

	if (!ht || !key)
		return (0);
	head = ht->array[key_index((unsigned char *) key, ht->size)];
	for (; head; head = head->next)
		if (strcmp(head->key, key) == 0)
			return (head->value);
	return (0);
}
