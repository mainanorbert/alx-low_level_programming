#include "main.h"
/**
 * main - the entry point function
 * @argc: argument to main count
 * @argv: string array of arguments passed
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, x, y;
	ssize_t no_bytes_r, bytes_w;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s\n", "cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((no_bytes_r = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_w = write(file_to, buffer, no_bytes_r);
		if (bytes_w == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (no_bytes_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	x = close(file_from), y = close(file_to);
	if (x == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_from), exit(100);
	if (y == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_to), exit(100);
	}
	return (0);
}
