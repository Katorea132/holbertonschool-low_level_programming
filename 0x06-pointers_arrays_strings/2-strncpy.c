/**
 * _strncpy - Copies a string and that's about it
 * @dest: Holds string 1
 * @src: Holds string 2
 * @n: Holds the amount of values to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; src[a] != 0; a++)
	{
	}
	for (b = 0; src[b] != 0 && b < n; b++)
	{
		dest[b] = src[b];
	}
	for (; b < n; b++)
	{
		dest[b] = 0;
	}
	return (dest);
}
