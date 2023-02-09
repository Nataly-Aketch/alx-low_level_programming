#include "main.h"
/**
 * readErr - read error
 * @from: source file
 */
void readErr(char *from)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
	exit(98);
}
/**
 * writeErr - write error
 * @to: destination file
 */
void writeErr(char *to)
{
	dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", to);
	exit(99);
}
/**
 * closeErr - close error
 * @fd: file descriptor
 */
void closeErr(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
 * main - copies contents of a file to another
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int from, to, rd, wr2, cl;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
		readErr(argv[1]);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
		writeErr(argv[2]);
	while (1)
	{
		rd = read(from, buff, 1024);
		if (rd < 0)
			readErr(argv[1]);
		wr2 = write(to, buff, rd);
		if (wr2 == -1)
			writeErr(argv[2]);
		break;
	}
	cl = close(from);
	if (cl == -1)
		closeErr(cl);
	cl = close(to);
	if (cl == -1)
		closeErr(cl);
	return (0);
}
