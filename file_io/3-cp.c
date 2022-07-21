#include "main.h"
int main(int argc, char *argv[])
{
	int fd, fd2, fd3, n, k;
	char *err, *buffer;

	err = malloc(32);
	buffer = malloc(1024);
	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to", strlen("Usage: cp file_from file_to"));
		write(STDERR_FILENO, "\n", 1);
		exit(97);
	}
	fd = open(argv[2], O_RDWR | O_TRUNC | O_CREAT, 00664);
	fd2 = open(argv[1], O_RDONLY);
	if (fd2 == -1)
	{
		err = "Error: Can't read from file ";
		write(STDERR_FILENO, err, strlen(err));
		write(STDERR_FILENO, argv[1], strlen(argv[1]));
		write(STDERR_FILENO, "\n", 1);
		free(err);
		exit(98);
	}
	if (fd == -1)
	{
		err = "Error: Can't write to ";
		write(STDERR_FILENO, err, strlen(err));
		write(STDERR_FILENO, argv[2], strlen(argv[2]));
		write(STDERR_FILENO, "\n", 1);

		exit(99);
	}
	fd3 = read(fd2, buffer, 1024);
	while (fd3 > 0)
	{
		write(fd, buffer, fd3);
		fd3 = read(fd2, buffer, 1024);
		if (fd3 < 0)
			break;
	}
	n = close(fd);
	k = close(fd2);
	if (n == -1 || k == -1)
	{
		err = "Error: Can't close fd ";
		write(STDERR_FILENO, err, strlen(err));
		write(STDERR_FILENO, "-1", strlen("-1"));
		write(STDERR_FILENO, "\n", 1);
		free(err);
		exit(100);
	}
	free(err);
	return (0);
}
