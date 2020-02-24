/**
 * _strchr - Finds a character in a string
 * @s: Holds the string
 * @c: Holds the test character
 * Return: Returns a char pointer
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != 0; a++)
	{
		if (s[a] == c)
		{
			return (&s[a]);
		}
	}
	return (s = 0);
}
