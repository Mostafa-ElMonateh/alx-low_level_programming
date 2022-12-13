#include "main.h"

/**
 * print_alphabet - Print all alphabets.
 * Description : This function is for printing all alphabets
 * followed by a new line.
 * Return: Void.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

/**
 * main - Entry point
 * Description: for excuting the function.
 * Return: 0;
 */

int main(void)
{
	print_alphabet();
	return (0);
}
