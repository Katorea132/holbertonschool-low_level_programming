#include "lists.h"
/**
 * get_nodeint_at_index - Gets a node at the index
 * @head: Holds the head
 * @index: Holds the index to look for
 * Return: the direction of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *lili = head;
	unsigned int i;

	for (i = 0; lili != 0; i++)
	{
		if (i == index)
			return (lili);
		lili = lili->next;
	}
	return (0);
}
