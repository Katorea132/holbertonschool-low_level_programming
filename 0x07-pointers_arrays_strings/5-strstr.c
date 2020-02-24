/**
 * _strstr - Locates a substring
 * @haystack: Holds the string to be searched
 * @needle: Holds the test to search for
 * Return: a pointer to a char
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int c = 0;

	for (a = 0; haystack[a] != 0; a++)
	{
		if (haystack[a] == needle[c] && needle[c] != 0)
		{
			return (&haystack[a]);
		}
	}
	return (0);
}

