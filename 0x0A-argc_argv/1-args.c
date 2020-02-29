#include <stdio.h>
/**
 * main - prints the amount of arguments passed
 * @argc: Counts the arguments passed
 * @argv: Holds strings that are the arguments passed
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
