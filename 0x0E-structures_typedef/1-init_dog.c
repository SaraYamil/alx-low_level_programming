#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - void katjib poinetr kat3tih struct ta3 dog
 * @d: pointer to struct ta3 dog hachkom
 * @name: name ta3 dog hachakom
 * @age: age ta3 dog hachakom
 * @owner: owner to relazaite void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
