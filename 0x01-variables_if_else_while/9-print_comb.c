#include <stdio.h>

/**
 * main - This will print every possible combination of 1 single digits
 * Return: 0
 */

int main(void)
{
	int n = '0';

	while (0 <= '9')
	{
		putchar(n);
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
