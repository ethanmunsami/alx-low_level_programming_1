#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - Function frees dogs
  *
  * @d: The dog to use
  */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
