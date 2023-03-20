#include "dog.h"
#include <stdio.h>

/**
 * init_dog - writes a function that initialise a variable of struct dog
 * @d: struct to initialise
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: dog's owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
