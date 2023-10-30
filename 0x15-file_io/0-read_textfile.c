#include "main.h"

/**
 * read_textfile - read the text from the file and print it into POSIX
 * @filename: the name of the file
 * @letters: the variable
 * Return: 0 or w
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *fp;

	if (filename == NULL)
		return (0);
	fp = malloc(sizeof(char) * letters);
	if (fp == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		free(fp);
		return (0);
	}
	r = read(o, fp, letters);
	if (r == -1)
	{
		free(fp);
		close(o);
		return (0);
	}
	w = write(STDOUT_FILENO, fp, r);
	if (w == -1 || w != r)
	{
		free(fp);
		close(o);
		return (0);
	}
	free(fp);
	close(o);
	return (w);
}
