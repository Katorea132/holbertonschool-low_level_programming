#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table
 * @ht: Holds the hash table
 * Return: none
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp = 0, *head = 0;

	for (i = 0; i < ht->size; i++)
		for (head = ht->array[i]; head; head = tmp)
		{
			tmp = head->next;
			free(head->key), free(head->value), free(head);
		}
	free(ht->array), free(ht);
}
