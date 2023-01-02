#include <main.h>
#include "holberton.h"

/**
 * _strchr - Gets the length of a prefix substring
 * @s: pointer that searchd in
 * @c: input character
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
