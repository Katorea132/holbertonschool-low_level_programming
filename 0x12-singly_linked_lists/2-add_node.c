#include "lists.h"
/**
 * add_node - Adds nodes
 * @head: Holds a pointer to the pointer to head
 * @str: Holds the string
 * Return: Address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *lili;
	unsigned int i;

	lili = malloc(sizeof(list_t));
	if (lili == 0)
		return (0);
	for (i = 0; str[i] != 0; i++)
		;
	lili->len = i;
	lili->str = strdup(str);
	lili->next = *head;
	*head = lili;
	return (lili);
}
