#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	array = (char *)malloc(sizeof(char) * (i + 1));
	
	if (array == NULL)
	{
		return (NULL)
	}

	for (j = 0; j <= i; j++)
	{
		array[j] = str[j];
	}

	return (array);
}
