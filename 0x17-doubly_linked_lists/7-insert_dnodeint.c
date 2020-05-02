#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts nodes at index
 * @h: Holds the head
 * @idx: Holds the position
 * @n: The value to add
 * Return: the node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t len, i;
	dlistint_t *tmp, *lili;

	len = dlistint_len(*h);
	tmp = *h;
	if (len < idx)
		return (0);
	else if(idx == 0)
		return (add_dnodeint(h, n));
	else if (idx == len)
		return (add_dnodeint_end(h, n));
	else
	{
		lili = malloc(sizeof(dlistint_t));
		if (lili)
		{
			lili->n = n;
			for (i = 0; tmp; tmp = tmp->next, i++)
				if (i - 1 == idx)
				{
					lili->next = tmp->next;
					lili->prev = tmp;
					tmp->next->prev = lili;
					tmp->next = lili;
					return (lili);
				}
		}
	}
	return (0);
}
