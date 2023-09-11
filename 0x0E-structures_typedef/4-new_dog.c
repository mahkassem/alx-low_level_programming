#include "dog.h"

/**
 * _strlen - length of string
 *
 * @str: char *
 *
 * Return: int
 */
int _strlen(char *str)
{
	int len = 0;

	while (str)
		len++;

	return (len);
}

/**
 * _strcopy - copies string
 *
 * @dest: char *
 * @src: char *
 *
 * Return:returns copied string
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';
	return (dest);
}

/**
 * new_dog - create new dog
 *
 * @name: char *
 * @age: float
 * @owner: char *
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	doggo->name = _strcopy(doggo->name, name);
	doggo->age = age;
	doggo->owner = _strcopy(doggo->owner, owner);

	return (doggo);
}
