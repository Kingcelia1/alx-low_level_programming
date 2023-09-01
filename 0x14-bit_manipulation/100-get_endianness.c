#include "main.h"

/**
 * get_endianness - observes if a machine is a small or big endian
 * Return: 0 for big, for small 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
