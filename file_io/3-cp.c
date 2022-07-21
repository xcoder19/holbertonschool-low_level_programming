#include "main.h"
void throwerr(char *err, char *filename, int errcode)
{
	if (filename == NULL)
	{
		dprintf(STDERR_FILENO, "%s\n", err);
		exit(errcode);
	}
	dprintf(STDERR_FILENO, "%s%s\n", err, filename);
	exit(errcode);
}
int main(int argc, char *argv[])
{
	int fd, fd2, fd3, n, k, fd4;
	char *buffer;

	buffer = malloc(1024);
	if (argc != 3)
		throwerr("Usage: cp file_from file_to", NULL, 97);

	fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 00664);
	fd2 = open(argv[1], O_RDONLY);
	if (fd2 == -1)
		throwerr("Error: Can't read from file ", argv[1], 98);

	if (fd == -1)
		throwerr("Error: Can't write to ", argv[2], 99);

	fd3 = read(fd2, buffer, 1024);
	if (fd3 == -1)
		throwerr("Error: Can't read from file ", argv[1], 98);

	while (fd3 > 0)
	{
		fd4 = write(fd, buffer, fd3);
		if (fd4 == -1)
			throwerr("Error: Can't write to ", argv[2], 99);

		fd3 = read(fd2, buffer, 1024);
		if (fd3 < 0)
			break;
	}
	n = close(fd);
	k = close(fd2);
	if (n == -1 || k == -1)
		throwerr("Error: Can't close fd -1", NULL, 100);

	return (0);
}
