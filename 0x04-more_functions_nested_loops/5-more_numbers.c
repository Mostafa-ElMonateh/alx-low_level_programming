#include "main.h"

/**
 * more_numbers - a function that prints the numbers from 0 to 14
 *  10 times repeated
 *  Return: void
 */
void more_numbers(void)
{
	int no, i;

	for (no = 0; no < 10; no++)
	{
		if (i >= 10)
		{
			_putchar((i / 10) + '0');
		}
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
