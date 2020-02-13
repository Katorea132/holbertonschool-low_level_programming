#include <math.h>
#include <stdio.h>

/**
 * main - main
 * Return: 0
 */
int main(void)
{
	long a;
	long d = 612852475143;

	for (a = 2; a < sqrt(d); a++)
	{
		for (; d % a == 0;)
		{
			d /= a;
		}
	}
	printf("%ld\n", d);
	return (0);
}
