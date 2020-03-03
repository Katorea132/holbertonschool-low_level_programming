#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str = Holds the string to be copied
 * Return: a pointer to a char
 */
char *_strdup(char *str)
{
	char *strc;
	int i;
	
	if (str == 0)
	{
		return (0);
	}
	for (i = 0; str[i] != 0; i++)
	{
	}
	strc = malloc((sizeof(char) * 1) + i);
	if (strc == 0)
	{
		return (0);
	}
	for (i = 0; str[i] != 0; i++)
	{
		strc[i] = str[i];
	}
	strc[i] = 0;
	return (strc);
}
