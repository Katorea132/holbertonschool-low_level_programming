int rand(void)
{
	static int h = 0;
	int values[] = {8, 8, 7, 9, 23, 74, 0};
	int position = 0;
	position = values[h];
	h++;
	return (position);
}