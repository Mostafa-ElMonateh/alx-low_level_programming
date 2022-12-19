#include "main.h"
/**
 * print_rev(char *s) - prints a string, in reverse, followed by a new line.
 * @length: length of a string.
 * @index: position of a character in a string.
 * @i: comparing variable.
 */
void print_rev(char *s)
{
	int length, index;

	while (s[index] =! '\0')
	{
		length++;
		index++;
	}

	length--;
	int i;

	for (i = index; index >= 0; length--)
	{
		_putchar(s[index]);
	}

	_putchar('\n');
}
