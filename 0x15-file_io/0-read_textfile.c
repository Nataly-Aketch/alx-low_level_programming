#include "main.h"
/**
 * read_textfile - reads textfile and prints it to stdout
 * @filename: name of file
 * @letters: length of text in file
 * Return: number of bytes written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, rd, wr;
	char *s = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	rd = read(op, s, letters);
	wr = write(STDOUT_FILENO, s, rd);
	if (op == -1 || rd == -1 || wr == -1)
		return (0);
	close(op);
	free(s);
	return (wr);
}
