#include <stdio.h>
/**
 * main - Entry point
 * Description: Use putchar() to print lowercase and then uppercase alphabet.
 * Return: 0
 */
int main(void)
{
	char x = 'a';

	while (x <='z')
	{
		putchar(x);
		x++;
	}

	x = 'A';

	while (x <='z')
	{
		putchar(x);
		x++;
	}

	putchar('\n');

	return (0);
}
