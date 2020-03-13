#include <stdarg.h>
/**
 * sum_them_all - sums them all
 * @n: Holds the amount of arguments, in a constant
 * @...: Holds many more arguments :D
 * Return: an integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list nums;

	if (n == 0)
		return (0);
	va_start(nums, n);
	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(nums, int);
	va_end(nums);
	return (sum);
}
