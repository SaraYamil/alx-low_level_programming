#include <stdio.h>
#include <stdlib.h>

/**
 * main - print by sara yamil a zin
 * @argc: numero w safe arrgm
 * @argv: array w safe arrgm
 *
 * Return: maso9akch hadchi ana li kanfhmo
 */
int main(int argc, char *argv[])
{
	int sara, i;
	char *loubya;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	sara = atoi(argv[1]);

	if (sara < 0)
	{
		printf("Error\n");
		exit(2);
	}

	loubya = (char *)main;

	for (i = 0; i < sara; i++)
	{
		if (i == sara - 1)
		{
			printf("%02hhx\n", loubya[i]);
			break;
		}
		printf("%02hhx ", loubya[i]);
	}
	return (0);
}
