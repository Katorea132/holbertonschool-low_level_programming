#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: Counts the number of arguments entered
 * @argv: Holds the arguments in a string
 * Return: 0;
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
