#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - creates a new dog
 *@d: dog class
 *@name: the dog name
 *@age: the dog's age
 *@owner: the dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		d->name = name;
		d->age = age;
		d->owner = owner;
}
