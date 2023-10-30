#include "main.h"

/**
 * create_file - function that creats a file
 * @filename: the name if the file
 * @text_content: hold the string
 * Return: -1 for fail and 1 for success
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, i;

	if  (filename == NULL)
		return (-1);
	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (op == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;
		wr = write(op, text_content, i);
		if (wr == -1)
		{
			close(op);
			return (-1);
		}
	}
	close(op);
	return (1);
}
