
#include "dog.h"
/**
 * free_dog - freeing dog struct
 * @d: dog struct
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);

		free(d->name);

		free(d);
	}
	else
	{
		return;
	}
}
