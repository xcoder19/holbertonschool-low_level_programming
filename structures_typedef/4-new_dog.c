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
		char *n = name;
		char *o = owner;
		name = malloc(strlen(n) + 1);
		if (name == NULL)
		{
			free(name);
			free(new_dog);
			return (NULL);
		}
		owner = malloc(strlen(o) + 1);
		if (owner == NULL)
		{
			free(name);
			free(owner);
			free(new_dog);
			return (NULL);
		}

		new_dog->name = strcpy(new_dog->name, n);
		new_dog->owner = strcpy(new_dog->owner, o);
		new_dog->age = age;
		return (new_dog);
	}
	else
	{
		free(new_dog);
		return (NULL);
	}
}
