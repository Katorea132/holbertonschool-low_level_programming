#include "holberton.h"
/**
 * read_textfile - Reads a textfile and prints it to POSIX stdout
 * @filename: Holds the file name
 * @letters: Holds the amount of letters to print
 * Return: The actual number of letters it could read and print, 0 on error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count, rad;
	char *buf;

	if (filename)
	{
		fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (0);
		buf = malloc(sizeof(char) * letters);
		if (!buf)
			return (0);
		rad = read(fd, buf, letters);
		if (rad == -1)
		{
			free(buf);
			return (0);
		}
		count = write(STDOUT_FILENO, buf, letters);
		if (count == -1)
		{
			free(buf);
			return (0);
		}
		free(buf);
		close (fd);
		return (rad);
	}
	return (0);
}