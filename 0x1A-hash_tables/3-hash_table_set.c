#include "hash_tables.h"

/**
 * hash_table_set - Sets a hash table
 * @ht: THe has table
 * @key: THe key
 * @value: the value
 * Return: 1 or 0 if succeeds or fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = 0, *head = 0;

	if (!ht | !key | !value)
		return (0);
	head = ht->array[key_index((unsigned char *) key, ht->size)];
	for (; head; head = head->next)
		if (strcmp(head->key, (char *)key) == 0)
		{
			free(head->value);
			head->value = strdup(value);
			return (1);
		}
	new = calloc(1, sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key), free(new);
		return (0);
	}
	new->next = ht->array[key_index((unsigned char *) key, ht->size)];
	ht->array[key_index((unsigned char *) key, ht->size)] = new;
	return (1);
}
