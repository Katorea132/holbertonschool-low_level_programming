#include "holberton.h"
/**
 * append_text_to_file - Appends text to a file
 * @filename: Holds the file name
 * @text_content: Holds the content to append
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrt, i;

	if (filename)
	{
		if (!text_content)
			return (1);
		fd = open(filename, O_RDWR | O_APPEND);
		if (fd == -1)
			return (-1);
		for (i = 0; text_content[i]; i++)
			;
		wrt = write(fd, text_content, i);
		if (wrt == -1)
			return (-1);
		close(fd);
		return (1);
	}
	return (-1);
}
