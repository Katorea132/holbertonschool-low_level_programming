#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: Holds a pointer to the pointer of the head
 * Return: the reversed thingy
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *tmp1;

	tmp = *head;
	if (!tmp)
		return (0);
	while (tmp->next)
	{
		tmp1 = tmp->next;
		tmp->next = tmp1->next;
		tmp1->next = *head;
		*head = tmp1;
	}
	return (*head);
}
