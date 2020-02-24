/**
 * _memset - Fills the first n bytes of the memory area
 * @s: points to the area
 * @b: Holds the constant byte
 * @n: Determines the amount of bytes
 * Return: returns a char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		*(s + c) = b;
	}
	return (s);
}
