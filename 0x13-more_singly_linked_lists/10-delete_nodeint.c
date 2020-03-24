#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes a node at the node position
 * @head: Holds a pointer to the head
 * @index: Holds the position to delete
 * Return: -1 if fails and 1 if it succeeds
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmp2;
	unsigned int i;

	tmp = *head;
	for (i = 0; tmp != 0; i++)
	{
		if (index == 0)
		{
			tmp2 = *head;
			*head = tmp2->next;
			free(tmp2);
			return (1);
		}
		else if ((i + 1) == index)
		{
			tmp2 = tmp->next;
			tmp->next = tmp2->next;
			free(tmp2);
			return (1);
		}
		tmp = tmp->next;
	}
	return (-1);
}
