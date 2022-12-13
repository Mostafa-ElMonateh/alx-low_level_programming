#include "main.h"
/**
  * print_last_digit - Prints the last digit of a number
  * @n: The number to be treated
  *
  * Return: Value of the last digit of number
  */
int print_last_digit(int n)
{
	int la_digit;

	la_digit = n % 10;

	if (la_digit < 0)
	{
		la_digit = la_digit * -1;
	}

	_putchar(la_digit + '0');

	return (la_digit);
}
