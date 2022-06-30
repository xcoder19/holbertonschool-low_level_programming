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
	dog_t *new_dogi;

	new_dogi = malloc(sizeof(dog_t));

	if (new_dogi != NULL)
	{

		new_dogi->name = malloc(sizeof(name));
		if (name == NULL)
		{
			free(new_dogi->name);
			free(new_dogi);
			return (NULL);
		}
		new_dogi->owner = malloc(sizeof(owner));
		if (new_dogi->owner == NULL)
		{
			free(new_dogi->name);
			free(new_dogi->owner);
			free(new_dogi);
			return (NULL);
		}

		new_dogi->name = strcpy(new_dogi->name, name);
		new_dogi->owner = strcpy(new_dogi->owner, owner);
		new_dogi->age = age;
		return (new_dogi);
	}
	else
	{
		free(new_dogi);
		return (NULL);
	}
}
