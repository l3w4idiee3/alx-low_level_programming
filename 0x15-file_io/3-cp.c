#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point for program to copy files
 * @argc: count of arguments passed
 * @argv: array of char pointers to the arguments
 *
 * Return: 1 on success, exits on failure w/ error code
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to;
	char buf[READ_NBYTES];
	ssize_t r;
	int fdr, fdw, c = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fdr = open(file_from, O_RDONLY);
	if (fdr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			file_from);
		exit(98);
	}
	fdw = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 00664);
	if (fdw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((r = read(fdr, buf, READ_NBYTES)))
		write(fdw, buf, r);
	if (close(fdw))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw);
		c = 1;
	}
	if (close(fdr))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdr);
		c = 1;
	}
	if (c)
		exit(100);
	exit(EXIT_SUCCESS);
}
