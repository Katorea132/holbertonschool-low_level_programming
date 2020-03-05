#include <stdlib.h>
/**
 * string_nconcat - concatenastes 2 strings
 * @s1: holds string 1
 * @s2: holds string 2
 * @n: Holds the amount of bytes to copy fromn s2
 * Return: a pointer to an array of char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (i = 0; s1[i] != 0; i++)
	{
	}
	for (j = 0; s2[j] != 0; j++)
	{
	}
	if (n > j)
	{
		s = malloc(sizeof(char) * (i + j + 1));
		if (s == 0)
			return (0);
		for (i = 0; s1[i] != 0; i++)
			s[i] = s1[i];
		for (j = 0; s2[j] != 0; i++, j++)
			s[i] = s2[j];
		s[i] = 0;
	}
	else
	{
		s = malloc(sizeof(char) * (i + n + 1));
		if (s == 0)
			return (0);
		for (i = 0; s1[i] != 0; i++)
			s[i] = s1[i];
		for (j = 0; j < n; i++, j++)
			s[i] = s2[j];
		s[i] = 0;
	}
	return (s);
}
