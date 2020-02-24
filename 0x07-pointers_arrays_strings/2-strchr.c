/**
 * _strchar - Finds a character in a string
 * @s: Holds the string
 * @c: Holds the test character
 * Return: Returns a char pointer
 */
char *_strchr(char *s, char c)
{
	for (; s!= 0; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (s + 1);
}
