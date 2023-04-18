#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints struct dog
 * @d: the struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	/*
	 * if ( d->name == NULL || d->age ==NULL || d->owner == NULL)
	*	printf("Name: (nil)\n");
	*/
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
