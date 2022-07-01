

#include "3-calc.h"
/**
 * get_op_func - return the correct func to use
 * @s: operation
 * Return: pointer to a function
 */
int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};

	int i;

	i = 0;

	while (ops[i].op)
	{

		if (!strcmp(s, ops[i].op))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
