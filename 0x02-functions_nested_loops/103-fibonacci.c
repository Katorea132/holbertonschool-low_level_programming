#include <stdio.h>

/**
 *main - kinda tired of fibonacci
 *Return: 0
 */
int main(void)
{
	long a = 1;
	long b = 2;
	long c = 0;
	long d = 0;
  long e = 4000000;
	while (a < e && b < e)
	{
		if ((b % 2) == 0)
			c += b;
		d = a + b;
		a = b;
		b = d;
	}
	printf("%ld\n", c);
	return (0);
}
