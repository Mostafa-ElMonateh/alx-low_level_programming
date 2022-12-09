#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all posible combinations for single-digit numbers.
 * Separated by a comma and a space.
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
