#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Entry point
 * @name: ptr
 * @owner: ptr
 * @age: float
 * Return: Always 0 (Success)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;
	int size_name = 0;
	int size_owner = 0;
	int i;

	ptr_dog = malloc(sizeof(dog_t));

	if (ptr_dog == NULL)
		return (NULL);
	while (name[size_name] != '\0')
		size_name++;
	ptr_dog->name = malloc(sizeof(char) * (size_name + 1));
	if (ptr_dog->name == NULL)
	{
		free(ptr_dog);
		return (NULL);
	}
	for (i = 0; i < size_name; i++)
		ptr_dog->name[i] = name[i];
	ptr_dog->name[size_name] = '\0';
	while (owner[size_owner] != '\0')
		size_owner++;
	ptr_dog->owner = malloc(sizeof(char) * (size_owner + 1));
	if (ptr_dog->owner == NULL)
	{
		free(ptr_dog->name);
		free(ptr_dog);
		return (NULL);
	}
	for (i = 0; i < size_owner; i++)
		ptr_dog->owner[i] = owner[i];
	ptr_dog->owner[size_owner] = '\0';
	ptr_dog->age = age;
	return (ptr_dog);
}
