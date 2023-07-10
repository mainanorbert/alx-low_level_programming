#include "main.h"
#include <string.h>

/**
 * create_file - function thatv creates a file
 * @filename: file to be created
 * @text_content: null terminted string
 * Return: returns 1 success & -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t no_bytes_w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		no_bytes_w = write(fd, text_content, strlen(text_content));
		if ((size_t) no_bytes_w != strlen(text_content) || no_bytes_w == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

