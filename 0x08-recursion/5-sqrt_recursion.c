/**
 * mult_test - test if the number is the root
 * @a: Holds the number to start at
 * @b: Holds the number to be tested against
 * Return: the number
 */
int mult_test(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	else if (a * a > b)
	{
		return (-1);
	}
	return(mult_test(a + 1, b));
}


/**
 * _sqrt_recursion - This finds the natural square root of a number
 * @n: Holds the number to be rooted
 * Return: The result of the square rooted number
 */
int _sqrt_recursion(int n)
{
	return (mult_test(1, n));
}

