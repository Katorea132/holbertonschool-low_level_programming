#include "lists.h"
/**
 * get_dnodeint_at_index - Gets a node at a given index
 * @head: Holds the head
 * @index: HOlds the index
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i;

	for (i = 0; tmp; tmp = tmp->next, i++)
	{
		if (i == index)
			return (tmp);
	}
	return (0);
}
