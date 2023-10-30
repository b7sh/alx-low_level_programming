#include "main.h"

/**
 * get_str - get the string for the abi version and type
 * @abi_version: hold the abi version value
 * Return: string
*/

const char *get_str(uint8_t abi_version)
{
	switch (abi_version)
	{
		case 0:
			return ("System V");
		case 1:
			return ("HP-UX");
		case 255:
			return ("Processor-specific");
		default:
		return ("Unknown");
	}
}

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
		print_error_and_exit("Error: can't open file");

	if (read(fd, &header, sizeof(Elf32_Ehdr)) != sizeof(Elf32_Ehdr))
		print_error_and_exit("Error: can't read ELF header");

	if (!(header.e_ident[EI_MAG0] == ELFMAG0 &&
			header.e_ident[EI_MAG1] == ELFMAG1 &&
			header.e_ident[EI_MAG2] == ELFMAG2 &&
			header.e_ident[EI_MAG3] == ELFMAG3))
	{
		print_error_and_exit("Error: Not an ELF file");
	}
	printf("ELF Header:\n");
	printf("  Magic:   %c %c %c %c\n",
			header.e_ident[EI_MAG1],
			header.e_ident[EI_MAG2],
			header.e_ident[EI_MAG3],
			header.e_ident[EI_MAG0]);
	printf("  Class:	%d\n", (header.e_ident[EI_CLASS] == ELFCLASS32)
		? 32 : 64);
	printf("  Data:	%s\n", (header.e_ident[EI_DATA] == ELFDATA2LSB)
		? "2's complement, little endian"
		: "2's complement, big endian");
	printf("  Version: %d\n", header.e_ident[EI_VERSION]);
	printf("  OS/ABI:	%d\n", header.e_ident[EI_OSABI]);
	printf("  ABI Version: %s\n", get_str(header.e_ident[EI_ABIVERSION]));
	printf("  Type:	%d\n", (header.e_type));
	printf("  Entry point address: 0x%x\n", header.e_entry);
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
