#include "dog.h"
#include <string.h>
/**
 * new_dog - dynamicly allocats a struct
 * @name: name
 * @age: age
 * @owner: owner
 * Return: return a pointer to dynamicly allocated struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog != NULL)
	{

		name = malloc(strlen(name) + 1);
		if (name == NULL)
		{
			free(name);
			return (NULL);
		}
		owner = malloc(strlen(owner) + 1);
		if (owner == NULL)
		{
			free(owner);
			return (NULL);
		}

		new_dog->name = strcpy(new_dog->name, name);
		new_dog->name = strcpy(new_dog->owner, owner);
		new_dog->age = age;
		return (new_dog);
	}
	else
	{
		free(new_dog);
		return (NULL);
	}
}
