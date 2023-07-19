#include "3-calc.h"
#include <stddef.h>
#include <string.h>

/**
 * get_op_func - The program selects the correct function to perform
 * the operation asked by the user.
 * @s: The operator passed as argument to the program
 *
 * Return: A pointer to the function that corresponds to the operator
 * given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	long unsigned int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
	};

	while (i < (sizeof(ops) / sizeof(ops[0])))
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);

		i++;
	}

	return (NULL);

}

