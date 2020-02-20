/**
 * string_toupper - Makes strings uppercase
 * @c: Stores the string
 * Return: a char
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != 0; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] -= 32;
		}
	}
	return (c);
}
