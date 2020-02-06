#include <stdio.h>

/**
 * main - print more numbers
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;
	for (a = 0; a <= 9; a++)
	{
		b = a + 1;
		for (; b < 9; b++)
		{
			c = b + 1;
			for (; c <= 9; c++)
			{
				d = c + 1;
				for (; d <= 9; d++)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
					if (!(a == 9 && b == 8 && c == 9 && d == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
