#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the header file
 * @name: the first pointer
 * @age: the float variable
 * @owner: the second pointer
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
