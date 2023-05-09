#include "main.h"

/**
 * main - entry point of the program
 * @argc: no of arguments
 * @argv: array of arguments strings
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int fd;
	ssize_t file_r;
	Elf64_Ehdr elf_h;

	if (argc != 2)
		exit(98);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		exit(98);
	file_r = read(fd, &elf_h, sizeof(Elf64_Ehdr));
	if (file_r != sizeof(Elf64_Ehdr))
			exit(98);
	if (elf_h.e_ident[EI_MAG0] != ELFMAG0 ||
		elf_h.e_ident[EI_MAG1] != ELFMAG1 ||
		elf_h.e_ident[EI_MAG2] != ELFMAG2 ||
		elf_h.e_ident[EI_MAG3] != ELFMAG3)
	{
		exit (98);
	}

