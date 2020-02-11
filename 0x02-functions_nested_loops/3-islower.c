/**
 * _islower - This will tell if is a lower
 * or upper case
 * @c: Holds the letter to check
 * Return: 1 or 0 depending if it's lowercase or not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
