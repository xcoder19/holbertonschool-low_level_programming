#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)

{
	int n;
	char *buffer;
	buffer = malloc(letters * sizeof(char));
	n = open(filename, O_RDWR);
	if (n != -1)
	{
		read(n, buffer, sizeof(buffer));
		write(1, buffer, sizeof(buffer));
		close(n);
	}
	return letters;
}