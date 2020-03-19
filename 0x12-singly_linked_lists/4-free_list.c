#include "lists.h"
/**
 * free_list - Frees lists
 * @head: Holds the things to be freed
 * Return: none
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != 0)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
