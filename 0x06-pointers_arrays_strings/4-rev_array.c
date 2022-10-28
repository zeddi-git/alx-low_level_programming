#include "main.h"

/**
 * reverse_array - a function that reverse an array.
 * @a: an input array
 * @n: number of elements of array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int j;
	int aux;

	while (j < n--)
	{
		aux = a[j];
		a[j++] = a[n];
		a[n] = aux;
	}
}
