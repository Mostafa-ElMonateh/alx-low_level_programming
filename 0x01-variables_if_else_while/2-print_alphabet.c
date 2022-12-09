#include <stdio.h>
/**
 * main - Entry point
 * Description: Using putchar() to print the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
