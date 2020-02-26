/**
 * _pow_recursion - Elevates to the power of the numbers
 * @x: Holds number to be elevated
 * @y: Holds the power to elevate
 * Return: The result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
