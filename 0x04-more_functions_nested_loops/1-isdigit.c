/**
 * _isdigit - This will tell if the variable is a 0 or a 9
 * @c: This holds the variable
 * Return: 1 or 0 if number or not
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
