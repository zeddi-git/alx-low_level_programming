#include "main.h"

/**
 * _islower - uses _putchar to print
 * prints alphabets ten times
 * Return: 0 for upper case and 1 lowercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			lower = 1;
		}
	}

	return (lower);
}
