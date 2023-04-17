#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - uses a variable of type struct dog
 * @d: struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);
			d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
}
