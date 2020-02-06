#include <stdio.h>

/**
 * main - doing the final combination of 2 2 digits numbers
 *
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for(a = 0; a <= 9; a++)
	{
		b = 0;
		for(; b <= 9; b++)
		{
			c = 0;
			for(; b <= 9; c++)
			{
				d = 0;
				for(; d <= 9; d++)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
					if (!( a == 9 && b == 9 && c == 9 && d == 9))
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
}
