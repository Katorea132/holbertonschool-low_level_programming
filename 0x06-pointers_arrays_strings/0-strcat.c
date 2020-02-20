/**
 * _strcat - Concatenates 2 strings, overwritting the terminating null
 * @dest: Holds the string 1
 * @src: Holds the string 2
 * Return: Returns chars
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != 0; a++)
	{
	}
	for (b = 0; src[b] != 0; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = 0;
	return (dest);
}
