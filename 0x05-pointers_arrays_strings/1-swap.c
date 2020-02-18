/**
 * swap_int - Swaps ints
 * @a: Holds number 1
 * @b: Holds number 2
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
