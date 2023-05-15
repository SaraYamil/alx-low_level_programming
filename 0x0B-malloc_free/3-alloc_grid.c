#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - ggggg gggg bggggg ggggg
 * @width: width variable
 * @height: height variable
 * Return: maso9akomchh ndir li bghit
 */
int **alloc_grid(int width, int height)
{
	int **sara;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	sara = malloc(sizeof(int *) * height);

	if (sara == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		sara[x] = malloc(sizeof(int) * width);

		if (sara[x] == NULL)
		{
			for (; x >= 0; x--)
				free(sara[x]);

			free(sara);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			sara[x][y] = 0;
	}

	return (sara);
}
