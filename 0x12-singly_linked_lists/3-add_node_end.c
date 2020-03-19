#include "lists.h"
/**
 * add_node_end - Adds node to the end of the list
 * @head: Holds pointer to the pointer of head
 * @str: Holds the string to put
 * Return: The address of new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lili, *tmp;
	unsigned int i;

	lili = malloc(sizeof(list_t));
	if (lili == 0)
		return (0);
	for (i = 0; str[i] != 0; i++)
		;
	lili->len = i;
	lili->str = strdup(str);
	lili->next = 0;
	if (*head == 0)
		*head = lili;
	else
	{
		tmp = *head;
		while (tmp->next != 0)
			tmp = tmp->next;
		tmp->next = lili;
	}
	return (lili);
}
