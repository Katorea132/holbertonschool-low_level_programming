#include <stdio.h>

/**
 * main - Hate fibonacci
 * Return: 0
 */
int main(void)
{
	long int a, b, c, d, e, f, halfas, halfbs;
	long int printfhalf, printshalf;

	d = 0;
	a = 0;
	b = 1;
	for (c = 0; c < 91; c++)
	{
		d = a + b;
		printf("%ld", d);
		if (c != 97)
			printf(", ");
		a = b;
		b = d;
	}
	e = a / 1000000000;
	f = a % 1000000000;
	halfas = b / 1000000000;
	halfbs = b % 1000000000;
	while (c < 98)
	{
		printfhalf = e + halfas;
		printshalf = f + halfbs;
		if (printshalf >= 1000000000)
		{
			printshalf %= 1000000000;
			printfhalf++;
		}
		printf("%ld%ld", printfhalf, printshalf);
		if (c == 97)
			break;
		printf(", ");
		e = halfas;
		f = halfbs;
		halfas = printfhalf;
		halfbs = printshalf;
		c++;
	}
	printf("\n");
	return (0);
}
