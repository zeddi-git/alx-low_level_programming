#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - f points to either func in main
 * @name: name
 * @f: pointer to print upp or non upp func
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
