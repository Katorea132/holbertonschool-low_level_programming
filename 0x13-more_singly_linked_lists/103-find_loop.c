#include "lists.h"
/**
 * find_listint_loop - finds the loop
 * @head: Holds the head
 * Return: Address of the start of the loop or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *past, *future;

	for (past = future = head; past && future;)
	{
		past = past->next;
		future = future->next->next;
		if (past == future)
		{
			for (future = head; past != future; past = past->next,
			future = future->next)
				;
			return (past);
		}
	}
	return (0);
}
