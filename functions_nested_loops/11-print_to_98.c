#include "main.h"
#include <stdio.h>
/**
 *  * print_to_98 - print all natural numbers
 *   * followed by a new line
 *    * @n: print from this number
*/

void print_to_98(int n)
{
	while (n >= 98)
	{
		if (n != 98)
		{
			printf("%d, ", n);
		n--;
		}
		else if (n == 98)
		{
		printf("%d", n);
		printf("\n");
		break;
		}
	}
	while (n < 98)
	{
	if (n != 98)
	{
	printf("%d, ", n);
	n++;
	}
	if (n == 98)
	{
		printf("%d", n);
		printf("\n");
		break;
	}
	}
}
