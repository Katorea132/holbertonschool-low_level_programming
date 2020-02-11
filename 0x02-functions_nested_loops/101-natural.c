#include <stdio.h>

/**
 * main - sums 
 * Return: 0
 */

int main(void)
{
	int a, b, c, d;

	d = 0;
	for (a = 0; a < 1024; a++)
	{
		b = a % 3;
		c = a % 5;
		if (b == 0 || c == 0)
		{
			d = d + a;
		}
	}
	printf("%d\n", d);
	return (0);
}
