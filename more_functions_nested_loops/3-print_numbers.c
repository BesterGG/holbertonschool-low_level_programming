#include "main.h"
/**
 *  * print_numbers - print the numbers, from 0 to 9, followed by new line
*/
void print_numbers(int c)
{

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar(10);
}

