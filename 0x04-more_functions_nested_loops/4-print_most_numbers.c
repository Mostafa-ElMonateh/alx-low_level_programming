#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, form 0 to 9
 * not 2 and 4
 * followed by a new line
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if ((i == 2) || (i == 4))
			continue;
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
