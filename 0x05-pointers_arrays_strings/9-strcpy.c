/**
 * _strcpy - copies 1 string into another including the null
 * @dest: Space to put the string
 * @src: Holds the string
 * Return: returns the buffer pointed by dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != 0; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
