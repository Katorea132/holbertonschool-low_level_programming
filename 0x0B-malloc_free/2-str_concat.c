#include <stdlib.h>
/**
 * str_concat - Concatenates 2 strings
 * @s1: Holds string 1
 * @s2: Holds string 2
 * Return: a pointer to a char
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int lens1, lens2, i;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	for (lens1 = 0; s1[lens1] != 0; lens1++)
	{
	}
	for (lens2 = 0; s2[lens2] != 0; lens2++)
	{
	}
	conc = malloc((sizeof(char) * (lens1 + lens2)) + 1);
	if (conc == 0)
	{
		return (0);
	}
	for (i = 0; i < lens1; i++)
	{
		conc[i] = s1[i];
	}
	lens1 = i;
	for (i = 0; i < lens2; i++)
	{
		conc[lens1] = s2[i];
		lens1++;
	}
	conc[lens1] = 0;
	return (conc);
}
