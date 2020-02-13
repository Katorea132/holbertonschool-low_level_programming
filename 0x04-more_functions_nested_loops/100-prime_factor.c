#include <stdio.h>

/**
 * main - main
 * Return: 0
 */
int main(void)
{
	long int a;
	long int d = 612852475143;

	for (a = 2; a < d; a++)
	{
		if (a % d == 0)
		{
			d /= a;			
		}
	}
	printf("%ld\n", d);
	return (0);
}
