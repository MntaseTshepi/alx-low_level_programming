#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Function initializes a variable of type struct dog
 * @d: User defined struct.
 * @name: Dog name input.
 * @age: Dog age input.
 * @owner: Owner name input.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
