#ifndef dog_h
#define dog_h
#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - dog data
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog_t dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

