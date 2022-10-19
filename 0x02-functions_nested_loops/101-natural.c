#include <stdio.h>

/**
 * main - This Marks the entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5) == 0 || (i % 3) == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
