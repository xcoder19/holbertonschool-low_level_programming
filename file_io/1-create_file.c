#include "main.h"
/**
 * create_file - create file
 * @filename: filename
 * @text_content: string to write
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int n;

	if (filename == NULL)
	{
		return (-1);
	}

	n = open(filename, O_RDWR | O_CREAT);
	if (n != -1)
	{
		if (text_content == NULL)
		{
			write(n, "", 0);
			close(n);
			return (1);
		}
		write(n, text_content, strlen(text_content));
		close(n);
		return (1);
	}

	close(n);
	return (-1);
}
