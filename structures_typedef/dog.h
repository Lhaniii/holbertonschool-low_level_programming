#ifndef DOG
#define DOG

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - dog id
 *
 * @name: Name of dog
 *
 * @age: Age of dog
 *
 * @owner: Owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
