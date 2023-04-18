#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: name
 * @age: age
 * @owner: dog's owner
 * Description: dog struct containing the name, age and owner's name.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
