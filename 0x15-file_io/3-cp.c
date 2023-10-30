#include "main.h"

char *create_buffer(void);
void close_the_file(int fd);

/**
 * create_buffer - allocate 1024 bytes
 *
 * Return: buffer (a pointer to the new allocated)
*/

char *create_buffer(void)
{
	char *buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't allocte memory\n");
		exit(99);
	}
	return (buffer);
}

/**
 * close_the_file - closing the file discriptor
 * @fd: the file discriptor
*/

void close_the_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point
 * @argc: the number of argument
 * @argv: an array pointer to the argument
 * Return: always 0 (success)
*/

int main(int argc, char *argv[])
{
	int file_from, file_to, rd, wr;
	char *fp;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	fp = create_buffer();
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(fp);
		exit(98); }
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't write to  %s\n", argv[2]);
		free(fp);
		close_the_file(file_from);
		exit(99); }
	while ((rd = read(file_from, fp, 1024)) > 0)
	{
		wr = write(file_to, fp, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(fp);
			close_the_file(file_from);
			close_the_file(file_to);
			exit(99); }
	}
	if (rd == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(fp);
		close_the_file(file_from);
		close_the_file(file_to);
		exit(98); }
	free(fp);
	close_the_file(file_from);
	close_the_file(file_to);
	return (0);
}
