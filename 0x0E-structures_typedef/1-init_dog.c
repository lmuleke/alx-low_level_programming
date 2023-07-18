#include "dog.h"
#include <stddef.h>

/**
 * init_dog - starts a struct dog
 * @d: pointer to the struct dog variable to start
 * @name: pointer to dog's name string
 * @age: value for dog's age
 * @owner: ponter to owners name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
