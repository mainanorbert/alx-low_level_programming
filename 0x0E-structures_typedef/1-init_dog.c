#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - initializing variable struct
 * @d: variable initialized
 * @name:pointer to name
 * @age: age of dog
 * @owner: name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
