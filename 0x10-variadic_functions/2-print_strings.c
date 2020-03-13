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

	if (separator != 0)
	{
		va_start(strs, n);
		for (i = 0; i < n; i++)
		{
			chpr = va_arg(strs, char *);
			if (i < n - 1)
			{
				if (chpr != 0)
					printf("%s%s", chpr, separator);
				else
					printf("%s%s", "(nil)", separator);
			}
			else
			{
				if (chpr != 0)
					printf("%s", chpr);
				else
					printf("%s", "(nil)");
			}
		}
		va_end(strs);
	}
	printf("\n");
}
