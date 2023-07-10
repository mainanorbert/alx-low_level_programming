#include "main.h"

/**
 * read_textfile - function reading text file and prints to POSIX stdio
 * @filename: name of file to read
 * @letters: nember of letters read
 * Return: letters read or printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytes_read;
	ssize_t bytes_w;
	int fd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	bytes_w = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_w == -1 || bytes_read != bytes_w)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytes_read);
}
