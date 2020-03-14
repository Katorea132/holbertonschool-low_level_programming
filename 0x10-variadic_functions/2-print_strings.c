#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: Separates
 * @n: Holds the amount of arguments
 * @...: Holds many more arguments :D
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *chpr;
	va_list strs;

	va_start(strs, n);
	for (i = 0; i < n; i++)
	{
		chpr = va_arg(strs, char *);
		if (chpr != 0)
			printf("%s", chpr);
		else
			printf("(nil)");
		if (i < (n - 1) && separator != 0)
			printf("%s", separator)
	}
	va_end(strs);
	printf("\n");
}
