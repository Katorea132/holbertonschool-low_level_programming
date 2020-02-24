/**
 * _strchr - Finds a character in a string
 * @s: Holds the string
 * @c: Holds the test character
 * Return: Returns a char pointer
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] <= 0; a++)
	{
		if (s[a] == c)
		{
			s = &s[a];
			break;
		}
		else if (s[a] == 0)
		{
			s = '\0';
		}
	}
	return (s);
}
