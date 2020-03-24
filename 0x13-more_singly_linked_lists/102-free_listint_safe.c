#include "lists.h"
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *tmp1, *tmp2;
	size_t count, countj;

	if (h && *h)
	{
		tmp = tmp1 = tmp2 = *h;
		for (count = 0; tmp; count++)
		{
			for (countj = 0, tmp1 = *h; count > countj; countj++, tmp1 = tmp1->next)
			{
				if (tmp2 == tmp1)
				{
					*h = 0;
					return (count);
				}
			}
			tmp2 = tmp->next;
			free (tmp);
			tmp = tmp2;
		}
		*h = 0;
		return (count);
	}
	return (0);
}
