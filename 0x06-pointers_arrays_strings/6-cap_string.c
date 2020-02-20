/**
 * cap_string - makes each first letter
 * @c: Stores the string
 * Return: returns a char
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != 0; i++)
	{
		if (i == 0 || c[i] == ' ' || c[i] == '\t' || c[i] == '\n' ||
				c[i] == ',' || c[i] == ';' || c[i] == '{' ||
				c[i] == '.' || c[i] == '!' || c[i] == '?' ||
				c[i] == '"' || c[i] == '(' || c[i] == ')' || c[i] == '}')
		{
			if (c[i] <= 'z' && c[i] >= 'a')
			{
				c[i] -= 32;
			}
			if (c[i + 1] <= 'z' && c[i + 1] >= 'a')
			{
				c[i + 1] -= 32;
			}
		}
	}
	return (c);
}
