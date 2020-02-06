#include <stdio.h>

/**
 * main - Print numbers
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 8; a++)
	{
		b = 0;
		for (b = b + a ; b < 9; b++)
		{
			c = 0;
			for (c = c + b; c <= 9; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (!(a == 7 && b == 8 && c == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
