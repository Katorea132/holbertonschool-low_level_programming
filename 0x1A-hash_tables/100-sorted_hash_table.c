#include "hash_tables.h"

/**
 * shash_table_create - Creates a hash table of size "size"
 * @size: Holds the size
 * Return: EIther the hash table or null
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ret;

	if (size == 0)
		return (0);
	ret = calloc(1, sizeof(shash_table_t));
	if (!ret)
		return (0);
	ret->size = size;
	ret->array = calloc(size, sizeof(shash_node_t *));
	if (!ret->array)
	{
		free(ret);
		return (0);
	}
	return (ret);
}

/**
 * shash_table_set - Sets a hash table
 * @ht: THe has table
 * @key: THe key
 * @value: the value
 * Return: 1 or 0 if succeeds or fails
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new = 0, *head = 0;

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
	new = calloc(1, sizeof(shash_node_t));
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
	new->snext = 0, new->sprev = 0;
	ht->array[key_index((unsigned char *) key, ht->size)] = new;
	return (sorted_node(ht, new));
}
/**
 * sorted_node - inserts the node sorted
 * @ht: Holds the hash table
 * @new: Holds the new node
 * Return: 1
 */
int sorted_node(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *tmp = 0;

	new->sprev = 0;
	new->snext = ht->shead;
	if (!ht->shead || strcmp(new->key, ht->shead->key) <= 0)
	{
		ht->shead = new;
		if (!ht->stail)
			ht->stail = new;
		if (new->snext)
			new->snext->sprev = new;
		return (1);
	}
	while (new->snext && strcmp(new->key, new->snext->key) > 0)
	{
		tmp = new->snext;
		new->snext = tmp->snext;
		new->sprev = tmp;
	}
	if (tmp)
		tmp->snext = new;
	if (new->snext)
		new->snext->sprev = new;
	else
		ht->stail = new;
	return (1);
}
/**
 * shash_table_get - Gets a value
 * @ht: Holds the table
 * @key: Holds the key
 * Return: the value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *head = 0;

	if (!ht || !key)
		return (0);
	head = ht->array[key_index((unsigned char *) key, ht->size)];
	for (; head; head = head->next)
		if (strcmp(head->key, key) == 0)
			return (head->value);
	return (0);
}

/**
 * shash_table_print - Prints a hash table
 * @ht: HOlds the key
 * Return: none
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *tmp = 0;
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

/**
 * shash_table_print_rev - Prints a hash table in reverse
 * @ht: HOlds the key
 * Return: none
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tail = 0;
	char found = 'n';

	if (!ht)
		return;
	printf("{");
	for (tail = ht->stail; tail; tail = tail->sprev)
	{
		if (found == 'n')
		{
			printf("'%s': '%s'", tail->key, tail->value);
			found = 'y';
		}
		else
			printf(", '%s': '%s'", tail->key, tail->value);
	}
	printf("}\n");
}

/**
 * shash_table_delete - Delete a hash table
 * @ht: Holds the hash table
 * Return: none
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *head = 0, *tmp = 0;

	for (i = 0; i < ht->size; i++)
		for (head = ht->array[i]; head; head = tmp)
		{
			tmp = head->next;
			free(head->key), free(head->value), free(head);
		}
	free(ht->array), free(ht);
}
