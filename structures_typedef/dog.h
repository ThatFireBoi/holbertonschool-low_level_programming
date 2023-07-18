#ifndef __dog__
#define __dog__
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - structure
 *
 *@name: dog name
 *
 *@age: dog age
 *
 *@owner: dogs owner
 */

struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
