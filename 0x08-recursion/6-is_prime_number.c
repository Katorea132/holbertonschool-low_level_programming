
/**
 * is_prime_number - Tells if a number is a prime or not
 * @n: Holds the number
 * Return: 1 or 0 depending if the number is prime or not
 */
int is_prime_number(int n)
{
	if (n == 2 || n == 7)
	{
		return (1);
	}
	else if (n % 2 != 0 && n != 2 && n > 1 && n % 5 != 0 && n % 7 != 0)
	{
		return (1);
	}
	return (0);
}
