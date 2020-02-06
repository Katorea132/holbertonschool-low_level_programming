#include <stdio.h>

/**
 * main - This iwll print form 00 to 99 separated by a comma
 * and a space
 * Return: 0
 */

int main(void)
{
	int a = '0';
	int b = '0';

	while (a <= '9')
	{
		while (b <= '9')
		{
			putchar(a);
			putchar(b);
			if (a < '9' && b < '9')
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
