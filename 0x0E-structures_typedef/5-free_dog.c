#include "dog.h"
#include <stdlib.h>


/**
 * free_dog - a functions that free a dog
 * @d: dog
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
