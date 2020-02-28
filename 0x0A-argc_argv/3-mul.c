#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplication of 2 numbers
 * @argc: Counts the amount of arguments passed
 * @argv: Holds the arguments in a string
 * Return: 0 if successful, 1 if not
 */
int main(int argc, char *argv[])
{
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

