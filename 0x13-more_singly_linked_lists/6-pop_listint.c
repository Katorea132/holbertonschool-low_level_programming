#include "lists.h"
/**
 * pop_listint - Removes the first element and returns the stored value
 * @head: Holds the head
 * Return: the value stored or 0 if none
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (!*head)
		return (0);
	tmp = (*(head))->next;
	n = (*(head))->n;
	free(*head);
	*head = tmp;
	return (n);

}
