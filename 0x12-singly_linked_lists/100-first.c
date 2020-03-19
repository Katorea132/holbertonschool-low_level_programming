#include <stdio.h>
void tortoise(void) __attribute__ ((constructor));
/**
 * tortoise - Executes before main to print a witty message
 * Return: none
 */
void tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
