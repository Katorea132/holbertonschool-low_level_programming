/**
 * _strlen_recursion - Returns the lenght of a string
 * @s: Holds the string
 * Return: Lenght of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
