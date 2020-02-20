/**
 * rot13 - encodes in rot13
 * @c: Stores the string
 * Return: a char
 */
char *rot13(char *c)
{
	int a, b, f;
	char d[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char e[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (a = 0; c[a] != 0; a++)
	{
		for (b = 0; d[b]; b++)
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
