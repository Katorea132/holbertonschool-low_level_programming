#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: String to be printed between numbers
 * @n: Holds the amount of arguments
 * @...: Many more arguments :D
 * Return: none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	if (separator != 0 && n != 0)
	{
		va_start(nums, n);
		for (i = 0; i < n; i++)
		{
			if (i < n - 1)
				printf("%d%s", va_arg(nums, int), separator);
			else
				printf("%d", va_arg(nums, int));
		}
		va_end(nums);
	}
	printf("\n");
}
