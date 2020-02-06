#include <stdio.h>

/**
 * main - This program prints all single digit numbers up to 9
 * Return: 0
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
