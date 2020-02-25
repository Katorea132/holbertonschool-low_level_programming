#include <stdio.h>
/**
 * print_diagsums - prints diagnola sum
 * @a: Holds a pointer to an int
 * @size: holds the size
 * Return: none
 */
void print_diagsums(int *a, int size)
{
	int b;
	int dimen;
	int suma = 0;
	int suma2 = 0;

	for (b = 0, dimen = 0; b < size; b++, dimen++)
	{
		suma += *(a + (size * b) + dimen);
	}
	for (dimen = 0,  b = 0; b < size; b++, dimen++)
	{
		suma2 += *(a + (size * (b + 1)) - (dimen + 1));
	}
	printf("%d, %d\n", suma, suma2);
}
