#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - hhhhhhhhh hhhhhhhhhhh hhhhhhhhhh hhh hh
 * @d: struct kellab free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
