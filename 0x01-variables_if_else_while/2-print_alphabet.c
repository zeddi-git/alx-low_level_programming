#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - This is the entry point
 * Return: Always is zero (success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	printf("\n");
	return (0);
}
