#ifndef HOL
#define HOL

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void pwasabimore(Elf64_Ehdr h);
void pmagic(Elf64_Ehdr elfi);
void pclass(Elf64_Ehdr elfi);
void pdata(Elf64_Ehdr elfi);
void pversion(Elf64_Ehdr elfi);
void pwasabi(Elf64_Ehdr elfi);
void pabiversion(Elf64_Ehdr elfi);
void ptype(Elf64_Ehdr elfi);
void pentry(Elf64_Ehdr elfi);

#endif /* for HOL */
