#include "lists.h"
/**
 * free_listint2 - Frees lists and sets head to null
 * @head: Pointer to the head pointer
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *tmp1;

	if (!head)
		return;
	tmp = *head;
	while (tmp)
	{
		tmp1 = tmp;
		tmp = tmp->next;
		free(tmp1);
	}
	*head = 0;
}
