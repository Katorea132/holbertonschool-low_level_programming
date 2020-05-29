#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: HOlds the key
 * Return: none
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp = 0;
	char found = 'n';

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		for (tmp = ht->array[i]; tmp; tmp = tmp->next)
		{
			if (found == 'n')
				printf("'%s': '%s'", tmp->key, tmp->value), found = 'y';
			else
				printf(", '%s': '%s'", tmp->key, tmp->value);
		}
	}
	printf("}\n");
}
