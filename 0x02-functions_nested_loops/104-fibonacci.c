#include <stdio.h>

/**
 * main - Hate fibonacci
 * Return: 0
 */
int main(void)
{
	long int a, b, c, d, e, f, g, h;
	long int ph, ps;

	d = 0;
	a = 0;
	b = 1;
	for (c = 0; c < 91; c++)
	{
		d = a + b;
		printf("%ld", d);
		if (c != 97)
			printf(", ");
		a = b;
		b = d;
	}
	e = a / 1000000000;
	f = a % 1000000000;
	g = b / 1000000000;
	h = b % 1000000000;
	while (c < 98)
	{
		ph = e + g;
		ps = f + h;
		if (ps >= 1000000000)
		{
			ps %= 1000000000;
			ph++;
		}
		printf("%ld%ld", ph, ps);
		if (c == 97)
			break;
		printf(", ");
		e = g;
		f = h;
		g = ph;
		h = ps;
		c++;
	}
	printf("\n");
	return (0);
}
