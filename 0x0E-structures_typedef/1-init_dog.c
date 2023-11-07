#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes the varible of type struct dog
 * @d: pointer vto struct dog
 * @name: name to be initialized
 * @age: age to be initialized
 * @owner: owner to be initialized
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d == NULL ?
		(d = malloc(sizeof(struct dog))) : 0;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
