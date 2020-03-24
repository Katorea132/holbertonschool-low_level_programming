#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a node in index
 * @head: Holds the head in a double pointer
 * @idx: Holds the position to be added at
 * @n: Holds the value to put in the new index
 * Return: The new address or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *lili, *tmp;
	unsigned int i;

	if (idx == 0)
	{
		lili = malloc(sizeof(listint_t));
		if (lili == 0)
			return (0);
		lili->next = *head;
		lili->n = n;
		*head = lili;
		return (lili);
	}
	tmp = *head;
	for (i = 0; tmp != 0; i++)
	{
		if ((i + 1) == idx)
		{
			lili = malloc(sizeof(listint_t));
			if (lili == 0)
				return (0);
			lili->n = n;
			lili->next = tmp->next;
			tmp->next = lili;
			return (lili);
		}
		tmp = tmp->next;
	}
	return (0);
}
