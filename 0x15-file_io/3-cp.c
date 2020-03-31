#include "holberton.h"
/**
 * main - Main
 * @argc: argument count
 * @argv: arguments
 * Return: 0 if success, other numbers if different failures occur
 */
int main(int argc, char *argv[])
{
	int fd, fd1, ccki, ccko;
	char BUFFER[1024];

	if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
		exit(98);
	fd1 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd1 == -1)
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	for (ccki = 1024; ccki == 1024;)
	{
		ccki = read(fd, BUFFER, 1024);
		if (ccki == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		ccko = write(fd1, BUFFER, ccki);
		if (ccko == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
	}
	ccko = close(fd);
	if (ccko == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", fd);
		exit(100);
	ccko = close(fd1);
	if (close_file == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", fd1);
		exit(100)
return (0);
}
