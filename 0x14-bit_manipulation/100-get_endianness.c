#include "main.h"

/**
 * comments are real codes
 * get_endianness - checks if a machine is little or big endian
 * Return the following 0 for big, 1 for little
 */

int get_endianness(void)

{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
