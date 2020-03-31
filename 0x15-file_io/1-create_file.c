#include "holberton.h"
/**
 * create_file - Creates a file
 * @filename: Holds the file name
 * @text_content: Holds the content of the text
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wrt, i;

	if (filename)
	{
		fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
		if (fd == -1)
			return (-1);
		if (text_content == 0)
			return (1);
		for (i = 0; text_content[i] != 0; i++)
			;
		wrt = write(fd, text_content, i);
		if (wrt == -1)
			return (-1);
		close(fd);
		return (1);
	}
	return (-1);
}
