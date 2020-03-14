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

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (i < n - 1 && separator != 0)
			printf("%s", separator);
	}
	va_end(nums);
	printf("\n");
}
