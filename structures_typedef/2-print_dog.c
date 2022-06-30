
#include "dog.h"

void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s", d->name);
	}

	printf("Age: %d", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
		printf("Owner: %s", d->owner);
	}
}