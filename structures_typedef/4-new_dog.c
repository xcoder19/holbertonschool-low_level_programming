#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog = {name, age, owner};

	return &dog;
}