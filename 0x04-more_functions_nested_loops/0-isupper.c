/**
 * _isupper - This will check for uppercase letters
 * @c: Holds the variable
 * Return: Prints 0 or 1 depending on uppercase or not
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
