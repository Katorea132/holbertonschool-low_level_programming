/**
 * _strspn - gets the lenght of a prefix substring
 * @s: Holds a string
 * @accept: Holds the tests
 * Return: the amount of matches
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	unsigned int c = 0;

	for (a = 0; s[a] != 0; a++)
	{
		for (b = 0; accept[b] != 0; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
		}
	}
	return (c);
}
