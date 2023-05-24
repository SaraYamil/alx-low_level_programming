#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - hhhhhhhh hhhhhhhh hhhhhhhhhhh hhhhh
 * hhhhhhhhhhh hhhhhhhhhh hhhhhhhh hhhhhhhh h
 * @s: variable dyal hhhhhhh hhhhhhh
 *
 * Return: maso9akch hadchi ana li dyrah a kimba
 * wach hhhhhhhhh hhhhhhhhhh hhhh sara yamil
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

