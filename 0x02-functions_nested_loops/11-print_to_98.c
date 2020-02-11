#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - this prints numbers to 98
 * @n: This holds the number
 * Return: nothing
 */
void printo_to_98(int n)
{
  if (n < 98)
    {
      for (; n == 98; n++)
	{
	  printf("%d", n);
	  if (!( n == 98))
	    {
	      printf(", ");
	    }
	}
    }
  else if (; n > 98; n--)
    {
      for (; n == 98; n--)
	{
	  printf("%d", n);
	  if (!(n == 98))
	    {
	      printf(", ");
	    }
	}
    }
  else
    {
      printf("%d", n);
    }
      printf("\n");
}
