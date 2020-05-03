#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * main - main
 * @argc: Holds the argument count
 * @argv: Holds the arguments
 * Return: 0 on success 1 on error
 */
int main(int argc, char *argv[])
{
	int i, len, ops = 0;
	char string[] = {'A', '-', 'C', 'H', 'R', 'D', 'w', '8', '7', 'l', 'N',
	'S', '0', 'E', '9', 'B', '2', 'T', 'i', 'b', 'g', 'p', 'n', 'M', 'V',
	'y', 's', '5', 'X', 'z', 'v', 't', 'O', 'G', 'J', 'c', 'Y', 'L', 'U',
	'+', '4', 'm', 'j', 'W', '6', 'f', 'x', 'q', 'Z', 'e', 'F', '3', 'Q',
	'a', '1', 'r', 'P', 'h', 'd', 'K', 'I', 'o', 'u', 'k'};
	char password[5];

	if (argc != 2)
		write(2, "Usage: ./keygen <Username>\n", 27), exit(1);
	len = strlen(argv[1]);
	password[0] = string[(len ^ 59) & 63];
	for (i = 0; i < len; i++)
		ops += argv[1][i];
	password[1] = string[(ops ^ 79) & 63];
	for (i = 0, ops = 1; i < len; i++)
		ops *= argv[1][i];
	password[2] = string[(ops ^ 85) & 63];
	for (i = 0, ops = argv[1][0]; i < len; i++)
		if (ops < argv[1][i])
			ops = argv[1][i];
	srand(ops ^ 14);
	password[3] = string[rand() & 63];
	for (i = 0, ops = 0; i < len; i++)
		ops += argv[1][i] * argv[1][i];
	password[4] = string[(ops ^ 239) & 63];
	for (i = 0, ops = 0; i < argv[1][0]; i++)
		ops = rand();
	password[5] = string[(ops ^ 229) & 63];
	write(1, password, 6);
	return (0);
}
