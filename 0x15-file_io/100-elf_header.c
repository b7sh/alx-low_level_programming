#include "main.h"

void display_elf_header(const char *filename);
void print_error_and_exit(const char *message);

/**
 * main - entry point
 * @argc: the number of argument
 * @argv: an array pointer to argument
 * Return: always 0 (success)
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	display_elf_header(argv[1]);
	return (0);
}
/**
 * display_elf_header - print the elf header content
 * @filename: hold the file
*/
void display_elf_header(const char *filename)
{
	Elf32_Ehdr header;
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
		print_error_and_exit("Error: can't open file\n");

	if (read(fd, &header, sizeof(Elf32_Ehdr)) != sizeof(Elf32_Ehdr))
		print_error_and_exit("Error: can't read ELF header\n");

	if (header.e_ident[EI_MAG0] != ELFMAG0)
		print_error_and_exit("Error: Not an ELF file");
	if (header.e_ident[EI_MAG1] != ELFMAG1)
		print_error_and_exit("Error: Not an ELF file");
	if (header.e_ident[EI_MAG2] != ELFMAG2)
		print_error_and_exit("Error: Not an ELF file");
	if (header.e_ident[EI_MAG3] != ELFMAG3)
		print_error_and_exit("Error: Not an ELF file");
	printf("Magic: %c\n", header.e_ident[EI_MAG1]);
	printf("Magic: %c\n", header.e_ident[EI_MAG2]);
	printf("Magic: %c\n", header.e_ident[EI_MAG3]);
	printf("Magic: %c\n", header.e_ident[EI_MAG0]);
	printf("Class: %d-bit\n", (header.e_ident[EI_CLASS] == ELFCLASS32) ? 32 : 64);
	printf("Data: %d\n", header.e_ident[EI_DATA]);
	printf("Version: %d\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", header.e_type);
	printf("Entry point address: 0x%x\n", header.e_entry);
	close(fd);
}
/**
 * print_error_and_exit - printing the error message and exit
 * @message: hold the error message
*/
void print_error_and_exit(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}
