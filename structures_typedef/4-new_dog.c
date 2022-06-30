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

	char *n, *o;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog != NULL)
	{

		n = malloc(sizeof(name));
		if (n == NULL)
		{
			free(n);
			free(new_dog);
			return (NULL);
		}
		o = malloc(sizeof(owner));
		if (o == NULL)
		{
			free(n);
			free(o);
			free(new_dog);
			return (NULL);
		}

		n = strcpy(new_dog->name, name);
		o = strcpy(new_dog->owner, owner);
		new_dog->age = age;
		return (new_dog);
	}
	else
	{
		free(new_dog);
		return (NULL);
	}
}
