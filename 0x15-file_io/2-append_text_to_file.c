#include "main.h"
/**
 * append_text_to_file - appends text to EOF
 * @filename: name of file
 * @text_content: file to be appended
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr;

	if (!filename)
		return (-1);
	op = open(filename, O_WRONLY | O_APPEND);
	if (!text_content && op > 0)
		return (1);
	if (!text_content && op == -1)
		return (-1);
	wr = write(op, text_content, strlen(text_content));
	if (wr == -1)
		return (-1);
	close(op);
	return (1);
}
