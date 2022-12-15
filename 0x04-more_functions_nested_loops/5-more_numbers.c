#include "main.h"

/**
 * more_numbers - a function that prints numbers from 0 to 14
 * repeated 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i, no;

	for (no = 0; no < 10; no++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
