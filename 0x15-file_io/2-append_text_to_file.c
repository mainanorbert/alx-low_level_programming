#include "main.h"

/**
 * append_text_to_file - a function appending text to file
 * @filename: file name of a the file appended to
 * @text_content: null terminated string to add at end of file
 * Return: returns 1 success -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t bytes_w;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytes_w = write(fd, text_content, strlen(text_content));
		if (bytes_w == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
