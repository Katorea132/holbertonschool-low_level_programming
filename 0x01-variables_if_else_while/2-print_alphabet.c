#include <stdio.h>

/**
 * main - This pritns the whole abc in lower case
 * Return: 0
 */

int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
