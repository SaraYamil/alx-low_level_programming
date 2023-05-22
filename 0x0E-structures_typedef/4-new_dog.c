#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - length of a string
 * Owned by Sara
 * @str: string
 * Return: length of string
 */

int _strlen(char *str)
{
	int x = 0;

	while (str[x] != '\0')
		x++;
	return (x);
}

/**
 * _strcopy - copy a sting
 * Owned by Sara Fara
 * @src: variableeee
 * @dest: variable
 * Return: machgolach a kimba
 */

char *_strcopy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


/**
 * new_dog - a function that creates a new dog
 * Owned by Sara Fara
 * @name: smya ta3 klab
 * @age: age dog
 * @owner: owner dog
 * Return: maso9akch
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	doggy = (dog_t *)malloc(sizeof(dog_t));
	if (doggy == NULL)
	{
		return (NULL);
	}
	doggy->name = (char *)malloc(_strlen(name) + 1);
	doggy->owner = (char *)malloc(_strlen(owner) + 1);

	if (doggy->name == NULL || doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy->owner);
		free(doggy);
		return (NULL);
	}

	_strcopy(doggy->name, name);
	_strcopy(doggy->owner, owner);
	doggy->age = age;
	return (doggy);
}
