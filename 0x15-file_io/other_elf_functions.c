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
 * magic_functions - prints magic values
 * @h: elf header
 */
void magic_functions(const Elf64_Ehdr *h)
{
	int x;

	printf("ELF Header:\n");
	printf("Magic:");
	for (x = 0; x < EI_NIDENT; ++x)
	{
		printf("%02x", h->e_ident[x]);
	}
	printf("\n");
}
