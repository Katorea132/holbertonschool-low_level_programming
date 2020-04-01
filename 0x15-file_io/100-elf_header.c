#include "holberton.h"
/**
 * main - program
 * @argc: argument count
 * @argv:: arguments
 * Return: 1 on success 0 on failure
 */
int main(int argc, char *argv[])
{
	int fd, fd1;
	Elf64_Ehdr elfi;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n", argv[1]), exit(98);
	fd1 = read(fd, &elfi, sizeof(Elf64_Ehdr));
	if (fd1 == -1)
		dprintf(STDERR_FILENO, "Can't read from file: %s\n", argv[1]), exit(98);
	if (elfi.e_ident[0] == 0x7f && elfi.e_ident[1] == 'E' &&
	elfi.e_ident[2] == 'L' && elfi.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", argv[1]), exit(98);
	pmagic(elfi);
	pclass(elfi);
	pdata(elfi);
	pversion(elfi);
	pwasabi(elfi);
	pabiversion(elfi);
	ptype(elfi);
	pentry(elfi);
	if (close(fd))
		dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", fd), exit(98);
	return (0);
}
/**
 * pmagic - Prints magic
 * @elfi: Holds elfi
 * Return: none
 */
void pmagic(Elf64_Ehdr elfi)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT - 1; i++)
		printf("%02x ", elfi.e_ident[i]);
	printf("%02x\n", elfi.e_ident[i]);
}

/**
 * pclass - prints ELF class
 * @elfi: Holds elfi
 * Return: none
 */
void pclass(Elf64_Ehdr elfi)
{
	printf("  Class:                             ");
	switch (elfi.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASSNONE:
			printf("none\n");
			break;
	}
}

/**
 * pdata - prints ELF data
 * @elfi: Holds elfi
 * Return: none
 */
void pdata(Elf64_Ehdr elfi)
{
	printf("  Data:                              ");
	switch (elfi.e_ident[EI_DATA])
	{
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATANONE:
			printf("none\n");
			break;
	}
}

/**
 * pversion - prints ELF version
 * @elfi: Holds elfi
 * Return: none
 */
void pversion(Elf64_Ehdr elfi)
{
	printf("  Version:                           %d", elfi.e_ident[EI_VERSION]);
	if (elfi.e_ident[EI_VERSION] == EV_CURRENT)
		printf("%i (current)\n", EV_CURRENT);
	else
		printf("%i\n", elfi.e_ident[EI_VERSION]);
}

/**
 * pwasabi - prints ELF osabi
 * @elfi: Holds elfi
 * Return: none
 */
void pwasabi(Elf64_Ehdr elfi)
{
	printf("  OS/ABI:                            ");
	switch (elfi.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		default:
			pwasabimore(elfi);
			break;
	}
	printf("\n");
}


/**
 * pwasabimore - prints ELF osabi more
 * @elfi: Holds elfi
 * Return: none
 */
void pwasabimore(Elf64_Ehdr elfi)
{
	switch (elfi.e_ident[EI_OSABI])
	{
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App");
			break;
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		default:
			printf("<unknown: %x>", elfi.e_ident[EI_OSABI]);
			break;
	}
}

/**
 * pabiversion  - prints ELF ABI version
 * @elfi: Holds elfi
 * Return: none
 */
void pabiversion(Elf64_Ehdr elfi)
{
	printf("  ABI Version:                       %d\n",
		elfi.e_ident[EI_ABIVERSION]);
}

/**
 * ptype - prints the ELF type
 * @elfi: Holds elfi
 * Return: none
 */
void ptype(Elf64_Ehdr elfi)
{
	char *hold = (char *)&elfi.e_type;
	int i = 0;

	printf("  Type:                              ");
	if (elfi.e_ident[EI_DATA] == ELFDATA2MSB)
		i = 1;
	switch (hold[i])
	{
		case ET_NONE:
			printf("NONE (None)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknown>: %x", hold[i]);
		break;
	}
	printf("\n");
}

/**
 * pentry - prints the ELF entry point address
 * @elfi: Holds elfi
 * Return: none
 */
void pentry(Elf64_Ehdr elfi)
{
	int i = 0, len = 0;
	unsigned char *p = (unsigned char *)&elfi.e_entry;

	printf("  Entry point address:               0x");
	if (elfi.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		i = elfi.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[i])
			i--;
		printf("%x", p[i--]);
		for (; i >= 0; i--)
			printf("%02x", p[i]);
		printf("\n");
	}
	else
	{
		i = 0;
		len = elfi.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[i])
			i++;
		printf("%x", p[i++]);
		for (; i <= len; i++)
			printf("%02x", p[i]);
		printf("\n");
	}
}
