#include "main.h"

/**
 * append_text_to_file - appends text to the end of the file
 * @filename: the name of the file
 * @text_content: hold the sting
 * Return: -1 on fail and 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, l;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l]; l++)
			;
		wr = write(op, text_content, l);
		if (wr == -1)
		{
			close(op);
			return (-1);
		}
	}
	close(op);
	return (1);
}
