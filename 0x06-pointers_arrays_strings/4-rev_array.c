/**
 * reverse_array - reverses an array of ints
 * @a: Holds array of int
* @n: Number of values of the array
 * Return: none
 */
void reverse_array (int *a, int n)
{
	int b;
	int c = 0;
	n = n - 1;
	for (b = 0; b <= n; b++)
	{
		c = a[n];
		a[n] = a[b];
		a[b] = c;
		n--;
	}
}
