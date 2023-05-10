#include "main.h"
/**
 * error_func - prints error message*
 * @message: error message
 */
void error_func(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}
/**
 * magic_func - prints magic values
 * @h: elf header
 */
void magic_func(const Elf64_Ehdr *h)
{
	int i;

	printf("ELF Header:\n");
	printf("Magic:");
	for (i = 0; i < EI_NIDENT; ++i)
	{
		printf("%02x ", h->e_ident[i]);
	}
	printf("\n");
}
/**
 * print_c_d - class code
 * @h: elf header
 */
void print_c_d(const Elf64_Ehdr *h)
{
	printf("Class:");
	switch (h->e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("Invalid class\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
	}
	printf("Data:");
	switch (h->e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("Invalid data encoding\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little-endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big-endian\n");
			break;
	}
	printf("Version: %d (current)\n", h->e_ident[EI_VERSION]);
}
/**
 * print_v - OS/ABI
 * @h: elf header
 */
void print_v(const Elf64_Ehdr *h)
{
	printf("OS/ABI: ");
	switch (h->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto\n");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
}
/**
 * print_elf_h - prints ABI version
 * @h: header of elf
 */
void print_elf_h(const Elf64_Ehdr *h)
{
	printf("ABI Version: %d\n", h->e_ident[EI_ABIVERSION]);
	printf("Type:");
	switch (h->e_type)
	{
		case ET_NONE:
			printf("No file type\n");
			break;
		case ET_REL:
			printf("Relocatable file\n");
			break;
		case ET_EXEC:
			printf("Executable file\n");
			break;
		case ET_DYN:
			printf("Shared object file\n");
			break;
		case ET_CORE:
			printf("Core file\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
	printf("Entry point address: 0x%lx\n", h->e_entry);
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: array o arguments
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr h;
	const char *filename = argv[1];
	int fd;
	ssize_t bytes_read;

	if (argc != 2)
	{
		error_func("Usage: elf_header elf_filename");
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		error_func("Failed to open the file.");
	}
	bytes_read = read(fd, &h, sizeof(h));
	if (bytes_read != sizeof(h))
	{
		error_func("Failed to read the ELF header.");
	}
	if (memcmp(h.e_ident, ELFMAG, SELFMAG) != 0)
	{
		error_func("Not an ELF file.");
	}
	magic_func(&h);
	print_c_d(&h);
	print_v(&h);
	print_elf_h(&h);
	close(fd);
	return (0);
}
