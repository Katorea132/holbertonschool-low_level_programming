#include "holberton.h"
#include <stdlib.h>
/**
 * _atoi - prints digits of a string
 * @s: Holds the string
 * Return: returns the value of the integer
 */
int _atoi(char *s)
{
	int i, sign, digit, logic;

	logic = 0;
	digit = 0;
	sign = 1;
	for (i = 0; s[i] != 0;)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			digit *= 10;
			digit -= (s[i] - '0');
			logic = 1;
		}
		else if (logic == 1)
		{
			break;
		}
		i++;

	}
	digit *= -sign;
	return (digit);
}
/**
 * _isdigit - This will tell if the variable is a 0 or a 9
 * @c: This holds the variable
 * Return: 1 or 0 if number or not
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * main - prints the multiplication result of 2 numbers
 * @argc: Holds number of arguments
 * @argv: Holds arguments
 * Return: 0
 */
int main (int argc, char *argv)
{
	char *error = "Error\n";
	char *all;
	int *mult;
	int i, j, k;

	if (argc != 3)
	{
		for (i = 0; error[i] != 0; i++)
			_putchar(error[i]);
		exit(98);
	}
	if (_isdigit(argv[1]) == 0 || _isdigit(argv[2]) == 0)
	{
		for (i = 0; error[i] != 0; i++)
			_putchar(error[i]);
		exit(98);
	}
	
}
