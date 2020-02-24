/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: Holds the string
 * @accept: Holds the test
 * Return: returns a pointer char
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != 0; a++)
	{
		for (b = 0; accept[b] != 0; b++)
		{
			if (s[a] == accept[b])
			{
				return (&s[a]);
			}
		}
	}
	return (0);
}

