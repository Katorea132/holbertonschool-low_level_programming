/**
 * _strncat - Concatenates 2 string, only including "n" strings
 * @dest: Holds string 1
 * @src: Holds string 2
 * @n: Holds the amount of values to concatenate
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != 0; a++)
	{
	}
	for (b = 0; src[b] != 0 && b < n; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = 0;
	return (dest);
}
