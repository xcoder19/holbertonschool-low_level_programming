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
	char *o, *n;
	new_dogi = malloc(sizeof(dog_t));

	if (new_dogi != NULL)
	{

		n = malloc(sizeof(name));
		if (n == NULL)
		{
			free(n);
			free(new_dogi);
			return (NULL);
		}
		o = malloc(sizeof(owner));
		if (o == NULL)
		{
			free(n);
			free(o);
			free(new_dogi);
			return (NULL);
		}

		n = _strcpy(new_dogi->name, name);
		o = _strcpy(new_dogi->owner, owner);
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
