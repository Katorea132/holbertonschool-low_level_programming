#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the amount of change needed
 * @argc: Counts the arguments
 * @argv: Holds the parameters in strings
 * Return: 0
 */
int main (int argc, char *argv[])
{
	int a;
	int b;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (b = 0; a > 0; b++)
		{
			if (a >= 25)
			{
				a -= 25;
			}
			else if (a >= 10)
			{
				a -= 10;
			}
			else if (a >= 5)
			{
				a -= 5;
			}
			else if (a >= 2)
			{
				a -= 2;
			}
			else
			{
				a -= 1;
			}
		}
	}
	printf("%d\n", b);
	return (0);
}

