#include <stdlib.h>
/**
 * strtow - Splits strings in to words
 * @str: Holds the string
 * Return: a pointer to a pointer of a char
 */
char **strtow(char *str)
{
	int i, j, k, lar, val, l;
	char **sepa;

	if (str == 0 || str == "")
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
	j = 0;
	for (i = 0; str[i] != 0 && j < val; i++)
	{
		if (str[i] != ' ')
		{
			for (lar = 0, k = i; str[k] != ' ' && str[k] != 0; k++, lar++)
			{
			}
			sepa[j] = malloc((lar + 1) * sizeof(char));
			if (sepa[j] == 0)
			{
				for (j -= 1; j >= 0; j++)
					free(sepa[j]);
				free(sepa);
				return (0);
			}
			for (l = 0; l < lar; l++, i++)
				sepa[j][l] = str[i];
			sepa[j++][m] = 0;
		}
	}
	sepa[j] = 0;
	return (sepa);
}
