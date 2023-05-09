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
	int j;

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
	printf("Magic:	");
	for (j = 0; j < EI_NIDENT; J++)
		printf("%02x", elf_h.e_ident[j]);
	printf("\n");
	printf("Class:			");
	switch (elf_h.e_ident[EI_CLASS])
	{
		case ELFCLASSNONE: printf("none\n"); break;
		case ELFCLASS32:	printf("ELF32\n"); break;
		case ELFCLASS64:	printf("ELF64\n"); break;
		default:	printf("<unknown>\n"); break;
	}
	printf("Data:			");
	switch (elf_h.e_ident[EI_DATA]) {
		case ELFDATANONE: printf("none\n"); break;
		case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
		case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
		default:          printf("<unknown>\n"); break;
	}
	printf("Version:                           %d\n", elf_h.e_ident[EI_VERSION]);
	printf("OS/ABI:                            ");
	switch (elf_h.e_ident[EI_OSABI]) 
	{
		case ELFOSABI_NONE:         printf("UNIX System V ABI\n"); break;
		case ELFOSABI_HPUX:         printf("HP-UX\n"); break;
		case ELFOSABI_NETBSD:       printf("NetBSD\n"); break;
		case ELFOSABI_LINUX:        printf("Linux\n"); break;
		case ELFOSABI_SOLARIS:      printf("Solaris\n"); break;
		case ELFOSABI_AIX:          printf("AIX\n"); break;
		case ELFOSABI_IRIX:         printf("IRIX\n"); break;
		case ELFOSABI_FREEBSD:      printf("FreeBSD\n"); break;
		case ELFOSABI_TRU64:        printf("Compaq TRU64 UNIX\n"); break;
		case ELFOSABI_MODESTO:      printf("Novell Modesto\n"); break;
		case ELFOSABI_OPENBSD:      printf("OpenBSD\n"); break;
		case ELFOSABI_OPENVMS:      printf("OpenVMS\n"); break;
		case ELFOSABI_NSK:          printf("HP Non-Stop Kernel\n"); break;
		default:			printf("unkown"); break;

    }
    return (0);
}
