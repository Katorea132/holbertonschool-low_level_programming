#include <stdio.h>

/**
 * main - This will print the abc but the e and q
 * Return: 0
 */

int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		if (!(i == 'e' || i == 'q'))
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
