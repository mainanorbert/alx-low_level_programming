#include "main.h"

/**
 * append_text_to_file - appends text at end of file
 * @filename: name of a file
 * @text_content: '\0' string to add at end of file
 * Return: 1 success -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t f_write;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		f_write = write(fd, text_content, strlen(text_content));
		if (f_write == -1)
		{
			close(f_write);
			return (-1);
		}
	}
	close(f_write);
	return (-1);
}
