#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * car - Prints a character
 * @arg: Holds the va_list
 * Return: none
 */
void car(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
 * inte - Prints integers
 * @arg: Holds the va_list
 * Return: none
 */
void inte(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
/**
 * flo - Prints floats
 * @arg: Holds the va_list
 * Return: none
 */
void flo(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
/**
 * str - prints a string
 * @arg: Holds the va_list
 * Return: none
 */
void str(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == 0)
		printf("(nil)");
	else
		printf("%s", s);

}
/**
 * print_all - prints anything that is sent
 * @format: Holds a string, each character points to a type of data
 * @...: Holds all the arguments
 * Return: none
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list waido;
	typ typin[] = {
		{"c", car},
		{"i", inte},
		{"f", flo},
		{"s", str},
		{0, 0}
	};

	i = 0;
	va_start(waido, format);
	while (format != 0 && format[i] != 0)
	{
		j = 0;
		while (typin[j].op != 0)
		{
			if (typin[j].op[0] == format[i])
			{
				typin[j].f(waido);
				if (format[i + 1] != 0)
					printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(waido);
}
