#include <stdio.h>

/**
 * main - Hate fibonacci
 * Return: 0
 */
int main(void)
{
	long a = 1;
	long b = 2;
	long c = 3;
  int e;

	printf("1, 2, ");
	for (e = 3; e <= 98; e++)
	{
		c = a + b;
		printf("%ld", c);
		a = b;
		b = c;
		if (i < 98)
    {
			printf(", ");
    }
	}
	printf("\n");
	return (0);
}
