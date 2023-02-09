#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of text file
 * @text_content: text
 * Return: -1 on error, 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int op, pt;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_CREAT | O_WRONLY | S_IWUSR);
	if (op == -1)
	{
		return (-1);
	}
	if (!text_content)
		return (1);
	pt = write(op, text_content, strlen(text_content));
	if (pt == -1)
		return (-1);
	close(op);
	return (1);
}
