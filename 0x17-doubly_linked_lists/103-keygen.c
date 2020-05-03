#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main
 * @argc: Holds the argument count
 * @argv: Holds the arguments
 * Return: 0 on success 1 on error
 */
int main(int argc, char *argv[])
{
	int i, len, ops = 0;
	char string[] = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char password[5];

	if (argc != 2)
		printf("Usage: ./keygen <Username>\n"), exit(1);
	len = strlen(argv[1]);
	password[0] = string[(len ^ 59) & 63]; //Simply XOR and AND operations over the lenght, with 59 and 63 respectively - WORKING
	printf("%c\n", password[0]);
	for (i = 0; i < len; i++)
	{
		ops += argv[1][i]; //This is a loop through the username, addign each value and incrementing I
	}
	password[1] = string[(ops ^ 79) & 63]; //Again, XOR and AND with 85 and 63 over the result of the addition - WORKING
	printf("%c\n", password[1]);
	for (i = 0, ops = 1; i < len; i++)
		ops *= argv[1][i]; //Multiplication of the words againt each other
	password[2] = string[(ops ^ 85) & 63]; //XOR 85 and AND 63 for ops, as index for strings - WORKING
	printf("%c\n", password[2]);
	return (0);
}