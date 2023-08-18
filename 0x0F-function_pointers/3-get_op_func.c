#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Chooses the correct function to run
 *               the operation demanded by the user.
 * @s: operator passed as an argument.
 *
 * Return: pointer to a function is corresponding
 *         to the operator will be given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}

