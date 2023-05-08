#include "main.h"

/**
 * main - entry point of program
 * @argc: no. of arguments
 * @argv: array of arguments passed
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int from_file, to_file;
	ssize_t bytes_r, bytes_w;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		print_error("Usage: %s file_from file_to", argv[0]);
		exit(97);
	}
	from_file = open(argv[1], O_RDONLY);
	if (from_file == -1)
	{
		print_error("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_file == -1)
	{
		print_error("Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_r = read(from_file, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_w = write(to_file, buffer, bytes_r);
		if (bytes_w == -1)
		{
			print_error("Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_r == -1)
	{
		print_error("Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	if (close(from_file) == -1)
	{
		print_error("Error: Can't close fd %d", from_file);
		exit(100);
	}
	if (close(to_file) == -1)
	{
		print_error("Error: Can't close fd %d", to_file);
		exit(100);
	}
	return (0);
}
