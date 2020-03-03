#include <stdlib.h>
/**
 * strtow - Splits strings in to words
 * @str: Holds the string
 * Return: a pointer to a pointer of a char
 */
char **strtow(char *str)
{
	int i, j, k;
	char **sepa;

	i = j = 0;
	if (str == 0 || str == "")
	{
		return (0);
	}
	sepa = malloc(sizeof(char) * (i + j + 1));
	if (sepa == 0)
	{
		return (0);
	}

