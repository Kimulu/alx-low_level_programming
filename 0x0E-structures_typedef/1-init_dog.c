#include <stddef.h>
#include "dog.h"
/**
 * init_dog - Initializes a struct dog with provided values.
 * @d: Pointer to the struct dog to initialize.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This function initializes a struct dog by setting its name,
 * age, and owner to the provided values.
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
