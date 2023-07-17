#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - The program creates a new dog
 * @name: An element in the struct dog
 * @age: An element in the struct dog
 * @owner: An element in the struct dog
 *
 * Return: POinter to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));

	if (newDog)
	{
		newDog->name = name;
		newDog->age = age;
		newDog->owner = owner;
	}

	return (newDog);
}