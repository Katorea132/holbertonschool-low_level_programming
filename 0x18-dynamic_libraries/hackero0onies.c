#include <stdlib.h>
int rand(void)
{
	static int h = 0;
	int values[] = {9, 8, 10, 24, 75, 9};
	int position = values[h];
	h++;
	return (position);
}