#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number
 * @index: bit
 * Return: value of the bit at index index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return (n >> index & 1);
}
