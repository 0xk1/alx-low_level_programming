#include "dog.h"

/**
 * init_dog -  function that initialize a variable of type struct dog
 * @d: struct dog
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}
