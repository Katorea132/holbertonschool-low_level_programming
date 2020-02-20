/**
 * _strcmp - compares values of 2 strings
 * @s1: Holds string 1
 * @s2: Holds string 2
 * Return: the value of the comparations
 */
int _strcmp(char *s1, char *s2)
{
	int a, b;
	int c = 0, d = 0;
	int e;

	for (a = 0; s1[a] != 0; a++)
	{
		c = c + s1[a];
	}
	for (b = 0; s2[b]; b++)
	{
		d = d + s2[b];
	}
	e = c - d;
	return (e);
}
