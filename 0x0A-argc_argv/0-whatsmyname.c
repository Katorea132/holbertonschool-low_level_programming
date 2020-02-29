#include <stdio.h>
/**
 * main - Prints name of itself
 * @argc: Counts arguments
 * @argv: Holds arguments in a string way
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
