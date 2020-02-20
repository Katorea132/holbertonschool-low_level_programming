/**
 * _strcmp - compares values of 2 strings
 * @s1: Holds string 1
 * @s2: Holds string 2
 * Return: the value of the comparations
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != 0; a++)
	{
		if (s1[a] < s2[a] || s1[a] > s2[a])
		{
			return (s1[a] - s2[a]);
		}
	}
	return (0);
}
