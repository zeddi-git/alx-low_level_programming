#include "main.h"

/**
 * print_alphabet_x10 - uses _putchar to print the alphabets in lower case ten times
 *Return: void
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
