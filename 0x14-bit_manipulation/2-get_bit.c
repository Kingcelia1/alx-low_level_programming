#include "main.h"

/**
 * get_bit - this will return the value of a bit at index in a decimal number
 * @n: the search number
 * @index: the bit index
 *
 * Return: the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
