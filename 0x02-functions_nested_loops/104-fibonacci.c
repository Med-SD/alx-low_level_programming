#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int current = 1;
	unsigned long int previous = 1;
	unsigned long int temp;
	int count;

	printf("%lu, %lu", previous, current);

	for (count = 3; count <= 98; count++)
	{
	temp = current;
	current += previous;
	previous = temp;

	printf(", %lu", current);
	}

	printf("\n");
	return (0);
}
