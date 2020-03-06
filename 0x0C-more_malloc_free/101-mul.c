#include <stdlib.h>
#include <stdio.h>
/**
 * _isdigit - This will tell if the variable is a 0 or a 9
 * @c: This holds the variable
 * Return: 1 or 0 if number or not
 */
int _isdigit(char *c)
{
	int i;

	for (i = 0; c[i] != 0; i++)
	{
		if (c[i] < '0' || c[i] > '9')
			return (0);
	}
	return (1);
}
/**
 * _strlen - It returns the lenght of a string
 * @s: Holds the string
 * Return: none
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != 0;)
		++a;
	return (a);
}
/**
 * _calloc - a function that allocates memory in an array using malloc
 * @nmemb: Determines the amount of sized bytes
 * @size: Determines the sizing of the bytes above
 * Return: a pointer to anything
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	char *t;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}
	s = malloc(nmemb * size);
	if (s == 0)
	{
		return (0);
	}
	t = s;
	for (i = 0; i < nmemb * size; i++)
		t[i] = 0;
	return (s);
}
/**
 * main - prints the multiplication result of 2 numbers
 * @argc: Holds number of arguments
 * @argv: Holds arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, len, car, pro, len1, len2;
	int *res;

	if (argc != 3 || !(_isdigit(argv[1])) || !(_isdigit(argv[2])))
	{
		printf("Error\n"), exit(98);
	}
	len1 = _strlen(argv[1]), len2 = _strlen(argv[2]), len = len1 + len2;
	res = _calloc(len, sizeof(int *));
	if (res == 0)
		printf("Error\n"), exit(98);
	for (i = len2 - 1, car = 0; i > -1; i--)
	{
		for (j = len1 - 1; j > -1; j--)
		{
			pro = (argv[2][i] - '0') * (argv[1][j] - '0');
			car =  (pro / 10);
			res[(i + j) + 1] += (pro % 10);
			if (res[(i + j) + 1] > 9)
			{
				res[i + j] += res[(i + j) + 1] / 10;
				res[(i + j) + 1] = res[(i + j) + 1] % 10;
			}
			res[(i + j)] += car;
		}
	}
	if (res[0] == 0 && res[1] == 0)
		printf("0");
	else if (res[0] == 0)
		for (i = 1; i < len; i++)
			printf("%d", res[i]);
	else
		for (i = 1; i < len; i++)
			printf("%d", res[i]);
	printf("\n");
	free(res);
	return (0);
}
