#include "dog.h"
#include <stdlib.h>

/**
 * #include "dog.h"
 *
 * #include <stdlib.h>
 * @str: string
 *
 * Return: pointer to newely allocated 
 */
char *_strdup(char *str)
{
	char *str1;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		;
	}
	i++;
		str1 = malloc(sizeof(char) * i);
	if (str1 == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
		str1[j] = str[j];
	return (str1);
}
/**
 * new_dog - structure
 * @name: array of character
 * @age: floate
 * @owner: array of character
 *
 * Return: string
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;

	if (name == NULL || owner == NULL)
		return (NULL);
	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
		return (NULL);
	dogg->name = _strdup(name);
	if (dogg->name == NULL)
	{
		free(dogg);
		return (NULL);
	}
	dogg->age = age;
	dogg->owner = _strdup(owner);
	if (dogg->owner == NULL)
	{
		free(dogg->name);
		free(dogg);
		return (NULL);
	}
	return (dogg);
}
