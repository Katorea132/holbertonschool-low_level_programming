/**
 * leet - encodes with 1337
 * @c: Holds the string
 * Return: a char
 */
char *leet(char *c)
{
	int a, b, f;
	char d[] = "aAeEoOtTlL";
	char e[] = "4433007711";

	for (a = 0; c[a] != 0; a++)
	{
		b = 0;
		f = 0;
		for (; d[b] != 0; b++)
		{
			if (c[a] == d[b])
			{
				f = b;
				c[a] = e[f];
			}
		}
	}
	return (c);
}
