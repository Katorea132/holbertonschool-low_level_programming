#include <stdio.h>
/**
 * print_array - Prints the given amount of values from an array
 * @a: Holds the array
 * @n: Holds the number of values to print
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (b < (n - 1))
		{
		printf("%d, ", a[b]);
		}
		else if (b == n - 1)
		{
			printf("%d", a[b]);
		}
	}
	printf("\n");
}
