#include "main.h"

/**
 * append_text_to_file - apend text at the end of a file
 * @filename: filename
 * @text_content: text
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	if (filename == NULL)
	{
		return -1;
	}
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd != -1)
	{

		write(fd, text_content, strlen(text_content));

		close(fd);
		return (1);
	}
	close(fd);
	return (-1);
}
