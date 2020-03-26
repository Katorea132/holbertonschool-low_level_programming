/**
 * get_endianness - Gets the endianness
 * Return: 0 or 1, if big endian or small
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
