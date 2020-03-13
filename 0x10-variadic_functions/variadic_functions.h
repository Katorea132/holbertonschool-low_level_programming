#ifndef VAR
#define VAR
/**
 * struct op - Struct op
 *
 * @op: The type
 * @f: The function associated
 */
typedef struct type
{
	char *op;
	void (*f)();
} typ;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
