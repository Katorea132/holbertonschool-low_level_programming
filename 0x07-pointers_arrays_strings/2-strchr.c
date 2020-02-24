/**
 * _strchr - Finds a character in a string
 * @s: Holds the string
 * @c: Holds the test character
 * Return: Returns a char pointer
  */
char *_strchr(char *s, char c)
{
	for (; *s != 0; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
	}
	return (s + 1);
}
