#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - find the length of the string
 * @ss: the character will be used
 * Return: i
*/

int _strlen(char *ss)
{
	int i;

	i = 0;
	while (ss[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copy the first string in the second string
 * @dest: first charactar
 * @src: second charactar
 * Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int cp = -1;

	do {
		cp++;
		dest[cp] = src[cp];
	} while (src[cp] != '\0');
	return (dest);
}

/**
 * new_dog - copy old dog in new dog
 * @name: the first string
 * @age: the float variable
 * @owner: the second string
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int b1, b2;

	b1 = _strlen(name);
	b2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (b1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (b2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
