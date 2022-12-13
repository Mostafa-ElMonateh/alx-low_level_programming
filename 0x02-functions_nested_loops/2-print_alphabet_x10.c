#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabets x10 times.
 * Description: prints alphabets 10times
 * followed by a new line.
 * Return (0);
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
		_putchar('\n');
	}
}

/**
 * main - Entry point.
 * Description: for excuting the function.
 * Return: 0.
 */

int main(void)
{
	print_alphabet_x10();

	return (0);
}
