#include "lists.h"
/**
 * add_nodeint_end - Adds a node to the end of the linked list
 * @head: Holds a pointer to the pointer
 * @n: Holds the number to assign
 * Return: A pointer to the last node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lili, *tmp;

	lili = malloc(sizeof(listint_t));
	if (lili == 0)
		return (0);
	lili->n = n;
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
