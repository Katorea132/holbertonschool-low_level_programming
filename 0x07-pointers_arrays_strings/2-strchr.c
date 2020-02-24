/**
 * _strchar - Finds a character in a string
 * @s: Holds the string
 * @c: Holds the test character
 * Return: Returns a char pointer
 */
char *_strchr(char *s, char c)
{
	int a;
	char *b;

	for (a = 0; s[a] != 0; a++)
	{
		if (s[a] == c)
		{
			b = (s + a);
			return (b);
		}
	}
	b = 0;
	return(b);
}
