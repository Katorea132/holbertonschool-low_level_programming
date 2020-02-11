/**
 * _abs - this prints the absolute value
 * @n: this holds the number
 * Return: value of a
 */
int _abs(int n)
{
	int a;

	if (n > 0 || n == 0)
	{
		a = n;
	}
	else
	{
		a = n * -1;
	}
	return (a);
}
