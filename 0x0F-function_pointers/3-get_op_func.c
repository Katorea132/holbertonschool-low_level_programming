#include "3-calc.h"
/**
 * get_op_func - Gets which function to point to
 * @s: Holds the value to check
 * @
 * Return: pointer to the right function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{0, 0}
	};
	int i;

	for (i = 0; ops[i].op != 0; i++)
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
	return (0);
}

