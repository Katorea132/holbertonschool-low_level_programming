int rand(void)
{
	static int h = 0;
	int values[] = {9, 5, -5, 47, 135, 8};
	int position = 0;
	position = values[h];
	h++;
	return (position);
}