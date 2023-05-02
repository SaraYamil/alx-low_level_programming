#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - valid passwords for the
 *        program 101-crackme.
 *
 * Return: mchoglkech.
 */
int main(void)
{
	char mdp[84];
	int i = 0, sum = 0, half1, half2;

	srand(time(0));

	while (sum < 2772)
	{
		mdp[i] = 33 + rand() % 94;
		sum += mdp[i++];
	}

	mdp[i] = '\0';

	if (sum != 2772)
	{
		half1 = (sum - 2772) / 2;
		half2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			half1++;

		for (i = 0; mdp[i]; i++)
		{
			if (mdp[i] >= (33 + half1))
			{
				mdp[i] -= half1;
				break;
			}
		}
		for (i = 0; mdp[i]; i++)
		{
			if (mdp[i] >= (33 + half2))
			{
				mdp[i] -= half2;
				break;
			}
		}
	}

	printf("%s", mdp);
	return (0);
}
