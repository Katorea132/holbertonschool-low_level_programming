/**
 * rev_string - reverses a string
 * @s: Holds variable
 * Return: None
 */
void rev_string(char *s)
{
	int a, b;
	char c = 0;

	for (a = 0; s[a] != 0; a++)
	{
	}
	for (b = 0; b < a; b++)
	{
		c = s[a - 1];
		s[a - 1] = s[b];
		s[b] = c;
		a--;
	}
}
