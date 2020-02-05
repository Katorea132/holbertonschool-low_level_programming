#include <stdio.h>
/**
 * main - prints the size of each kind of value
 * Return: 0
 */
int main(void)
{
	long int a;
	long long b;
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(a));
	printf("Size of a long long: %lu byte(s)\n", sizeof(b));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
