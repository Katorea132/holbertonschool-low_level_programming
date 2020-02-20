/**
 * rot13 - rotates the char by 3 letters
 * @c: Holds the string
 * Return: char
 */
char *rot13(char *c)
{
	int a;
	
	a = 0;
	while (c[a] != 0)
	{
		if ((c[a] <= 'm' && c[a] >= 'a') || (c[a] <= 'M' && c[a] >= 'A'))
		{
			c[a] += 13;
		}
		else 
		{
			while ((c[a] <= 'z' && c[a] >= 'n') || (c[a] <= 'Z' && c[a] >= 'N'))
			{
				c[a] -= 13;
			}
		}
		a++; 
	}
	return (c);
}
