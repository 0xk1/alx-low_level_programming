#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's onwer
 * Description: dog desc
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
vodi free_dog(dog_t *d);

#endif
