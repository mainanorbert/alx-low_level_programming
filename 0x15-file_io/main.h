#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <elf.h>

#define BUFFER_SIZE 1024

int  _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_elf_h(const Elf64_Ehdr* h);
/*void print_error(const char *message, const char *arg);*/
void error_func(const char *message);
void magic_functions(const Elf64_Ehdr *h);
#endif
