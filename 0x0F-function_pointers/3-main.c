#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - this main by sara fara hhhh a knadhak a kimba
 * @argc: zzzzzzz zzzzzzzzzz zzzzzzzzz zzzzzzzzz zzzzzzzz zzzzz
 * @argv: argement in arry w safe hadchi makhasskch dkhol fih
 *
 * Return: maso9akch
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int sara, yamil;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	sara = atoi(argv[1]);
	op = argv[2];
	yamil = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && yamil == 0) ||
	    (*op == '%' && yamil == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(sara, yamil));

	return (0);
}
