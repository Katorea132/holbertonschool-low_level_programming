#include <stdio.h>
/**
 * print_diagmus - prints diagnola sum
 * @a: Holds a pointer to an int
 * @size: holds the size
 * Return: none
 */
void print_diagsums(int *a, int size)
{
	int b;
	int dimen = size * size;
	int sum = 0;
	
	for (b = 0; b < dimen; b++)
	{
		if (b % (size + 1) == 0)
		{
			sum += a[b];
		}
	}
	printf("%d, ", sum);
	for (sum = 0,  b = 0; b < dimen; b++)
	{
		if ( b % (size - 1) == 0 && b != (dimen - 1) && a != 0)
		{
			sum += a[b];
		}
	}
	printf("%d\n", sum);
}
