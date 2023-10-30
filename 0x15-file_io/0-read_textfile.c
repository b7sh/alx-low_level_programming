#include "main.h"

/**
 * read_textfile - read the text from the file and print it into POSIX
 * @filename: the name of the file
 * @letters: the variable
 * Return: 0 or w
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *fp;

	if (filename == NULL)
		return (0);
	fp = malloc(sizeof(char) * letters);
	if (fp == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		free(fp);
		return (0);
	}
	rd = read(op, fp, letters);
	if (rd == -1)
	{
		free(fp);
		close(op);
		return (0);
	}
	wr = write(STDOUT_FILENO, fp, rd);
	if (wr == -1 || wr != rd)
	{
		free(fp);
		close(op);
		return (0);
	}
	free(fp);
	close(op);
	return (wr);
}
