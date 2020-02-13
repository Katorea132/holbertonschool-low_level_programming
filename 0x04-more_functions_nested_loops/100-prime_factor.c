#include <math.h>
#include <stdio.h>

/**
 * main - main
 * Return: 0
 */
int main(void)
{
	long int a;
	long int d = 612852475143;

	for (a = 2; a < sqrt(d); a++)
	{
		for(;d % a == 0;)
		{
			d /= a;
		}
	}
	printf("%ld\n", d);
	return (0);
}
