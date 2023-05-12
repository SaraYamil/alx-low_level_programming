#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - wach string dgit
 * @str: array str
 *
 * Return: maso9akch
 */
int check_num(char *str)
{

	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*county stringy*/

	{
		if (!isdigit(str[count])) /*chekr ta3 str count*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Printy smya ta3 program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: maso9akch
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*kador 3la arry bach tchof*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]); /*ATOI --> kihwal lina string l int*/
			sum += str_to_int;
		}

		/*ila masda9ach dak program i parinty lya error*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*majmou3*/

	return (0);
}


