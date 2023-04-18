#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - rturns len
 * @s: string
 * Return: len
 */

int _strlen(char *s)
{
	int  i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * _create_array - creates an array of chars.
 * @size: the size of the memory to allocate.
 * Return: the array created.
 */

char *_create_array(unsigned int size)
{
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (!array)
		return (NULL);
	return (array);
}

/**
 * _strdup - duplicates a given string.
 * @str: string
 * Return: the array created.
 */

char *_strdup(char *str)
{
	char *new_str;
	int i;

	if (str == NULL)
		return (NULL);
	i = 0;
	new_str = _create_array(_strlen(str) + 1);
	if (!new_str)
		return (NULL);
	while (i <= _strlen(str))
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: the dog's age
 * @owner: the owner's name
 * Return: the dog created, NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (!new_dog)
		return (NULL);
	new_dog->name = _strdup(name);
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}



