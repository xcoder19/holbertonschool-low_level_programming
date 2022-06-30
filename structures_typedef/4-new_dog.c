#include "dog.h"
#include <string.h>
/**
 * new_dog - dynamicly allocats a struct
 * @name: name
 * @age: age
 * @owner: owner
 * Return: return a pointer to dynamicly allocated struct
 */
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dogi;
	char *o = owner, *n = name;
	new_dogi = malloc(sizeof(dog_t));

	if (new_dogi != NULL)
	{

		name = malloc(sizeof(name));
		if (name == NULL)
		{
			free(name);
			free(new_dogi);
			return (NULL);
		}
		owner = malloc(sizeof(owner));
		if (owner == NULL)
		{
			free(name);
			free(owner);
			free(new_dogi);
			return (NULL);
		}

		new_dogi->name = n;
		new_dogi->owner = o;
		new_dogi->age = age;
		return (new_dogi);
	}
	else
	{
		free(new_dogi);
		return (NULL);
	}
}

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
