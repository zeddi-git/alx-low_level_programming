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
	int i, sum;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}

	for (sum = 0; sum <= *str; sum++)
	{
	}

	sum += 1;
	array = malloc(sizeof(char) * sum);

	for (i = 0; i < sum; i++)
	{
		array[i] = str[i];
	}
	if (array == NULL)
	{
		return (NULL);
	}
	return (array);
}
