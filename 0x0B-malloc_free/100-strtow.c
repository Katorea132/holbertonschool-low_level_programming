#include <stdlib.h>
/**
 * strtow - Splits strings in to words
 * @str: Holds the string
 * Return: a pointer to a pointer of a char
 */
char **strtow(char *str)
{
	int i, j, k, l;
	int val, lar;
	char **sepa;

	val = k = 0;
	if (str == 0 || str[0] == 0)
		return (0);
	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == 0))
			val++;
	}
	if (val == 0)
		return (0);
	sepa = malloc((val + 1) * sizeof(char *));
	if (sepa == 0)
		return (0);
	for (i = 0; str[i] !=  0 && k < val; i++)
	{
		if (str[i] != ' ')
		{
			for (lar = 0, j = i; str[j] != ' ' && str[j] != 0; j++, lar++)
			{
			}
			sepa[k] = malloc((lar + 1) * sizeof(char));
			if (sepa[k] == 0)
			{
				for (k = k - 1; k >= 0; k++)
					free(sepa[k]);
				free(sepa);
				return (0);
			}
			for (l = 0; l < lar; l++, i++)
				sepa[k][l] = str[i];
			sepa[k++][l] = 0;
		}
	}
	sepa[k] = 0;
	return (sepa);
}
