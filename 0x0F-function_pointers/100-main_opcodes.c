#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints the opcode
 * @argc: Holds the amount of arguments
 * @argv: Holds the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	char *dir = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (i = 0; i < atoi(argv[1]); i++)
	{
		printf("%02hhx", dir[i]);
		if (i != (atoi(argv[1]) - 1))
			printf(" ");
	}
	printf("\n");
	return (0);
}
