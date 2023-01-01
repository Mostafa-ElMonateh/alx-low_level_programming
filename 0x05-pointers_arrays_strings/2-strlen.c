#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: A pointer that points to a string.
 *
 * Return: The length of @str.
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; ++len)
		s++;

	return (len);
}
