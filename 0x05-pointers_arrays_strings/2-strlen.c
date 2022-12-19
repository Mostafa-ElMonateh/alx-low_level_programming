#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of @str.
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; ++length)
		s++;

	return (length);
}
