/**
 * infinite_add - adds semi infinitely
 * @n1: Holds number 1
 * @n2: Holds number 2
 * @r: Stores the result
 * @size_r: buffer size
 * Return: Returns a char
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int sum = 0;
	int digit = 0;
	int digit1 = 0;
	int rem = 0;
	int num = 0;

	for (a = 0; n1[a] != 0; a++)
	{
	}
	for (b = 0; n2[b] != 0; b++)
	{
	}

	if ((a + 2) > size_r || (b + 2) > size_r)
	{
		return (0);
	}
	a -= 1;
	b -= 1;
	for (; a >= 0 || b >= 0;)
	{
		digit = digit1 = 0;
		if (a >= 0)
		{
			digit = n1[a--] - '0';
		}
		if (b >= 0)
		{
			digit1 = n2[b--] - '0';
		}
		sum = digit + digit1 + rem;
		if (sum > 9)
		{
			rem = 1;
			sum -= 10;
		}
		else
		{
			rem = 0;
		}
		r[c++] = (sum + '0');
	}
	if (rem == 1)
	{
		r[c++] = (1 + '0');
	}
	d = c;
	c -= 1;
	for (e = 0; e < c; e++, c--)
	{
		num = r[c];
		r[c] = r[e];
		r[e] = num;
	}
	r[d] = '\0';
	return (r);
}

