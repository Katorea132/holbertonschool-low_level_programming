#include <stdio.h>

/**
 *main - fibonacci is cool
 *Return: 0
 */
int main(void)
{
	int a;
	long b, c, d;

	b = 0;
	c = 1;
	for (a = 0; a < 50; a++)
	{
		d = b + c;
		b = c;
		c = d;
		if (a != 49)
			printf("%ld, ", d);
		else
			printf("%ld\n", d);
	}
	return (0);
}
