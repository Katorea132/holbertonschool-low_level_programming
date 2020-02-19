#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints a key of 2772 sum of ASCII value
 * Return: 0
 */
int main(void)
{
	int b, c;

	srand(time(NULL));
	for (b = 2772; b > 122;)
	{
		c = (rand() % 125);
		printf("%c", c);
		b = b - c;
	}
	printf("%c", b);
	return (0);
}
