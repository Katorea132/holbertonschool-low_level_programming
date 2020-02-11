/**
 * _isalpha - checks if is alphabetic or not
 * @c: Holds the character
 * Return: depends if alpha or not 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
