/**
 * wildcmp - checks if 2 strings are the same
 * also that a * can be considered as anything
 * @s1: Holds string 1
 * @s2: Holds string 2
 * Return: an int, 0 or 1
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1 == 0)
	{
		return (1);
	}
	else if (*s1 == *s2 && *s1 != 0)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == 0)
		{
			return (1);
		}
		else if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		else
		{
			if (*(s2 + 1) != *(s1 + 1))
			{
				return (wildcmp(s1 + 1, s2));
			}
			else if(*(s2 + 1) == *(s1 + 1))
			{
				return (wildcmp(s1 + 1, s2 + 1));
			}
		}
	}
	return (0);
}
	/**
	else if (*s1 == 0 || *s2 == 0)
	{
		if (*s1 == 0 && *s2 == '*' && *(s2 + 1) == 0)
		{
			return (1);
		}
		return (0);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*' && *(s2 + 1) != 0)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*' && *(s2 + 1) == 0)
	{
		return (wildcmp(s1 + 1, s2));
	}
	return (0);
}
**/
