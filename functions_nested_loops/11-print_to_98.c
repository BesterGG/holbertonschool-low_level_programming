#include "main.h"
#include <stdio.h>

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
		printf('\n');
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
	else if (n == 98)
	{
		printf("%d", n);
		printf('\n');
		break;
	}
	}
printf("\n");
}
