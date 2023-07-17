#include "dog.h"
#include <stdio.h>

/**
 * print_dog - The program prints a struct dog
 * @d: Pointer to the struct dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (d->name != NULL ? d->name : "(nil)"));
		(d->age != -1.0) ?  printf("Age: %f\n", d->age) : printf("Age: (nil)\n");
		printf("Owner: %s\n", (d->owner != NULL ? d->owner : "(nil)"));
	}
}
