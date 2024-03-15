#ifndef DOG
#define DOG

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - dog id
 *
 * @name - name of dog
 *
 * @age - age of dog
 *
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
