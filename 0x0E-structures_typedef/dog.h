#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct that stores some information of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: age of the dog
 *
 * Description: structure called "dog" that stores its name,
 * its age, and the name of the owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
