#include "main.h"
int main(int argc, char *argv[])
{
	int fd, fd2, n, k;

	char *err, *buffer;
	err = malloc(32);
	buffer = malloc(1024);
	if (argc != 3)
	{
		exit(97);
		write(STDERR_FILENO, "\n", 1);
	}
	fd = open(argv[2], O_RDWR | O_TRUNC | O_CREAT, 664);
	fd2 = open(argv[1], O_RDONLY);

	if (fd2 == -1)
	{
		exit(98);
		err = "Error: Can't read from file ";
		write(STDERR_FILENO, err, strlen(err));
		write(STDERR_FILENO, argv[1], strlen(*argv[1]));
		write(STDERR_FILENO, "\n", 1);
		free(err);
	}
	if (fd == -1)
	{
		exit(99);
		err = "Error: Can't write to ";
		write(STDERR_FILENO, err, strlen(err));
		write(STDERR_FILENO, argv[2], strlen(*argv[2]));
		write(STDERR_FILENO, "\n", 1);
		free(err);
	}
	read(fd2, buffer, 1024);
	dprintf(fd, buffer);
	n = close(fd);
	k = close(fd2);
	if (n == -1 || k == -1)
	{
		exit(100);
		err = "Error: Can't close fd FD_VALUE ";
		write(STDERR_FILENO, err, strlen(err));
		write(STDERR_FILENO, "-1", strlen("-1"));
		write(STDERR_FILENO, "\n", 1);
		free(err);
	}

	free(err);
}
