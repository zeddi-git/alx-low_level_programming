#include "main.h"

/**
 * _isalpha - prints if character is letter, lowercase or upper
 * @c: character to print
 * Return: 1 to print
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (c == lower || c == upper)
		{
			isletter = 1;
		}
	}
	return (isletter);
}
