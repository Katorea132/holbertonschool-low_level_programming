#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


/**
 * main - prints the amount of change needed
 * @argc: Counts the arguments
 * @argv: Holds the parameters in strings
 * Return: 0
 */
int main (int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = 0;
	char negative[] = "-";

	if (argc == 2)
	{
		if (strstr(argv[1], negative))
		{
			printf("0\n");
			return (0);
		}
		else
		{
			for(; a <= 0 && a <= 25; b++)
			{
				a -= 25;
			}
			for (; a <= 0 && a <= 10; b++)
			{
				a -= 10;
			}
			for (; a <= 0 && a <= 5; b++)
			{
				a -= 5;
			}
			for (; a <= 0 && a <= 2; b++)
			{
				a -= 2;
			}
			for (; a <= 0 && a - 1 <= 0; b++)
			{

				a -= 1;
			}
			printf("%d\n", b);
			return (0);
		}
	}
	printf("Error\n");
	return (1);
}
