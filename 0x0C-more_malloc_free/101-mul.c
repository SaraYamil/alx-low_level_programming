#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - check wach string mafihach non-digit char
 * @s: string inpute f fonction hhhhhhh ZZZZZZZ HHHHH
 *
 * Return: hadchi ktire wlah ila maso9akch hhhhhhhZZZZ ZZZZhhhhh hhhhhhhhhhhhhh
 *
 */
int is_digit(char *s)
{
	int z = 0;

	while (s[z])
	{
		if (s[z] < '0' || s[z] > '9')
			return (0);
		z++;
	}
	return (1);
}

/**
 * _strlen - katraj3 lina toul ta3 string
 * @s: inpute strin hachak
 *
 * Return: wach choglak a sidi kimba
 */
int _strlen(char *s)
{
	int z = 0;

	while (s[z] != '\0')
	{
		z++;
	}
	return (z);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - darb ta3 joj ta3 psitive number
 * @argc: number values
 * @argv: array  argument
 *
 * Return: ach kangol dima a zmar
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
