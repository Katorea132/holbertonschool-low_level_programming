#include <stdio.h>

/**
 * main - print combinations without repeating
 * Return: 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 8; a++)
	{
		b = a + 1;
		for (; b <= 9; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (!(a == 8 && b == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
