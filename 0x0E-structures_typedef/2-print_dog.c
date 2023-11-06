#include <stdio.h>
#include "dog.h"
#include <stddef.h>
/**
 * print_dog - Prints the content of a struct dog.
 * @d: Pointer to the struct dog to print.
 *
 * Description: This function prints the content of a struct dog.
 * If the provided pointer @d is NULL, the function does nothing.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
