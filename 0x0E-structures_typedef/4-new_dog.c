#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *myptr;
	int i, len1, len2;

	if (!name || !owner)
	{
		return (NULL);
	}
	myptr = malloc(sizeof(myptr));
	if (myptr == NULL)
	{
		free(myptr);
		return (NULL);
	}
	for (len1 = 0; name[len1] != '\0'; len1++)
		;
	for (len2 = 0; owner[len2] != '\0'; len2++)
		;
	myptr->name = malloc(sizeof(char) * len1 + 1);
	myptr->owner = malloc(sizeof(char) * len2 + 1);
	if (!myptr->name || !myptr->owner)
	{
		free(myptr->name), free(myptr->owner), free(myptr);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		myptr->name[i] = name[i];
	myptr->name[len1] = '\0';
	myptr->age = age;
	for (i = 0; i < len2; i++)
		myptr->owner[i] = owner[i];
	myptr->owner[len2] = '\0';
	return (myptr);
}
