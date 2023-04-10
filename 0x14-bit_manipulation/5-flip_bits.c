#include "main.h"

/**
 * comments are the real codes
 * flip_bits - counts the number of bits to change
 * to get from one number to another number
 * first number = p
 * second number = q
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int p, unsigned long int q)

{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = p ^ q;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
