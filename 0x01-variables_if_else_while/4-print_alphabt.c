#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - This is Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != e && low != q)
		{
			putchar(low);
		}
	}
	printf("\n");
	return (0);
}
