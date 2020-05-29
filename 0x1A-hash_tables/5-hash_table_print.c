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

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		if (tmp)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			for (; tmp; tmp = tmp->next)
				printf(", '%s': '%s'", tmp->key, tmp->value);
		}
	}
	printf("}\n");
}
