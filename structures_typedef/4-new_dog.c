#include "dog.h"
#include <string.h>
/**
 * new_dog - dynamicly allocats a struct
 * @name: name
 * @age: age
 * @owner: owner
 * Return: a
 * @return:return a pointer to dynamicly allocated struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog != NULL)
	{
		char *n = name;
		char *o = owner;

		name = malloc(strlen(name) + 1);
		owner = malloc(strlen(owner) + 1);

		new_dog->name = n;
		new_dog->owner = o;
		new_dog->age = age;
		return new_dog;
	}
	else
	{
		return (NULL);
	}
}
