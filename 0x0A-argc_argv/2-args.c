#include <stdio.h>
/**
 * main - prints all arguments passed
 * @argc: Counts the arguments passed
 * @argv: Holds the arguments in strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a <= argc - 1; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
