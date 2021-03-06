#include "main.h"
/**
 * read_textfile - read content of a file and outputs it
 * @filename: path of file
 * @letters: number of letters
 * Return: number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int n;
	size_t k;
	char *buffer;

	buffer = malloc(letters * sizeof(char));
	n = open(filename, O_RDONLY);
	if (n != -1)
	{
		k = read(n, buffer, letters);

		write(STDOUT_FILENO, buffer, k);
		close(n);
	}
	return (k);
}
