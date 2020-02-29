#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Adds numbers
 * @argc: Counts the arguments passed
 * @argv: Holds the arguments in strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a = 0;
	int b, c;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (b = 1; b < argc; b++)
		{

			for (c = 0; argv[b][c] != 0; c++)
			{
				if (!isdigit(argv[b][c]))
				{
					printf("Error\n");
					return (1);
				}
			}
			a += atoi(argv[b]);
		}
		printf("%d\n", a);
	}
	return (0);
}
