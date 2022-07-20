#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)

{
	int n;
	char *buffer;
	buffer = malloc(letters * sizeof(char));
	n = open(filename, O_RDONLY);
	if (n != -1)
	{
		read(n, buffer, letters);
		write(1, buffer, letters);
		close(n);
	}
	return letters;
}