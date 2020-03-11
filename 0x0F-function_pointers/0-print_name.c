/**
 * print_name - Pritns a name using a given function
 * @name: Holds the name to print
 * @f: Holds the printing function
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0)
		if (f != 0)
			f(name);
}
