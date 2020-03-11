#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Recieves the thingies
 * @argc: Counts the arguments
 * @argv: Holds the arguments
 * Return: 0 or a specific number for an specific error
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if ((*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '/' && *argv[2] != '*'
			&& *argv[2] != '%') || argv[2][1] != 0)
	{
		printf("Error\n");
		return (99);
	}
	if (atoi(argv[3]) == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
