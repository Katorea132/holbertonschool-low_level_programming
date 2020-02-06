#include <stdio.h>

/**
 * main - print more numbers
 * Return: 0
 */
int main(void)
{
	int a;
	int aa;
	int b;
	int bb;

	for (a = 0; a <= 9; a++)
	{
		for (aa = 0; aa <= 9; aa++)
		{
			bb = aa + 1;
			b = a;
			for (; b <= 9; b++)
			{
				for (; bb <= 9; bb++)
				{
					putchar(a + '0');
					putchar(aa + '0');
					putchar(' ');
					putchar(b + '0');
					putchar(bb + '0');
					if (!(a == 9 && aa == 8 && b == 9 && bb == 9))
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
