#include <stdio.h>

/**
 * main - This will print both upper and lower case abc
 * Return: 0
 */

int main(void)
{
	int i = 'a';
	int a = 'A';

	while(i >= 'z')
	{
		putchar(i);
		i++;
	}
	while(a >= 'Z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
