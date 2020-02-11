#include "holberton.h"

/**
 * print_times_table - prints times table
 * @n: holds the times
 * Return: none
 */
void return_times_table(int n)
{
  int a, b;
  int c, d, e ,f;

  if (n <= 15 && n >= 0)
    {
      for ( a = 0; a <= n; a++)
	{
	  for (b = 0; b <= n; b++)
	    {
	      c = a * b;
	      d = c / 100;
	      e = (c / 10) % 10;
	      f = c % 10;
	      if ( d == 0 && !(b == 0)
		{
		  _putchar(' ');
		  if (e == 0)
		    {
		      _putchar(' ');
		    }
		  else
		    {
		      _putchar(e + '0');
		    }
		  _putchar(f + '0');
		}
		else if (d !=  0)
		  {
		    _putchar(d + '0');
		    _putchar(e + '0');
		    _putchar(f + '0');
		  }
		if (b == 0)
		  {
		    _putchar('0');
		  }
		if (!(b == n))
		  {
		    _putchar(',');
		    _putchar(' ');
		  }
		}
		_putchar('\n');
		b = 0;
	    }
	}
    }
}
