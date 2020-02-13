#include <stdio.h>

/**
 * main - main
 * Return: 0
 */
int main(void)
{
	long int c = 612852475143;
	int a, b;
	int d;

	for (a = 2; a <= c; a++)
	{
		if (c % a == 0)
		{
			d = 1;
			for ( b = 2; b <= a/2; b++)
			{
				if (a % b == 0)
				{
					d = 0;
					break;
				}
			}
			if (d == 1)
			{
				printf("%d ", a);
			}
		}
	}
	return (0);
}
