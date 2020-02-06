#include <stdio.h>

/**
 * main - This will print all the hexadecimal characters
 * Return: 0
 */

int main(void)
{
	int n = '0';
	int a = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
