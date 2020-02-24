/**
 * _strstr - Locates a substring
 * @haystack: Holds the string to be searched
 * @needle: Holds the test to search for
 * Return: a pointer to a char
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;
	int c = 0;

	for (a = 0; haystack[a] != 0; a++)
	{
		for (b = 0; haystack[a + c] == needle[b + c] && needle[b + c] != 0 && haystack[a + c] != 0;)
		{
			c++;
		}
		if (needle[b + c] == 0)
		{
			return (&haystack[a]);
		}
	}
	return (0);
}

