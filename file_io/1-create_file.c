#include "main.h"
int create_file(const char *filename, char *text_content)
{
	if (filename == NULL)
	{
		return -1;
	}

	int n;

	n = open(filename, O_RDWR | O_CREAT);
	if (n != -1)
	{
		write(n, text_content, strlen(text_content));
		close(n);
		return -1;
	}

	close(n);
	return -1;
}