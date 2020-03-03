#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments of my program
 * @ac: Holds the number of arguments
 * @av: Holds the pointers to the string arguments
 * Return: returns a pointer to a char
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	char *conc;

	if (ac == 0 || av == 0)
	{
		return (0);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			k++;
		}
	}
	conc = malloc(sizeof(char) * (ac + k + 1));
	if (conc == 0)
	{
		return (0);
	}
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++, k++)
		{
			conc[k] = av[i][j];
		}
		conc[k] = '\n';
		k++;
	}
	conc[k] = 0;
	return (conc);
}
