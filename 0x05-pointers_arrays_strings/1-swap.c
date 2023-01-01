#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a : the first pointer that points to the first integer to be swapped.
 * @b : the second pointer that points to the second integer to be swapped.
 * Return : void
 */
void swap_int(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
