#include "main.h"

/**
 * read_textfile - reads text file and prints to POSIX stdio
 * @filename: name of file
 * @letters: nember of letters read
 * Return: actual number of letters read or printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *my_buffer;
	ssize_t bytes_read;
	ssize_t bytes_w;
	int fd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	my_buffer = malloc(sizeof(char) * letters);
	if (my_buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_read = read(fd, my_buffer, letters);
	if (bytes_read == -1)
	{
		free(my_buffer);
		close(fd);
		return (0);
	}
	bytes_w = write(STDOUT_FILENO, my_buffer, bytes_read);
	if (bytes_w == -1 || bytes_read != bytes_w)
	{
		free(my_buffer);
		close(fd);
		return (0);
	}
	free(my_buffer);
	close(fd);
	return (bytes_read);
}
