#include <stdio.h>
/**
 * int main - function of print fizzbuzz test
*/
int main(void)
{
char count;

for (count = 1; count < 100; count++)
{
	if ((count % 5 == 0) && (count % 3 == 0))
	{
		printf("FizzBuzz");
	}
	else if (count % 3 == 0)
	{
		printf("Fizz");
	}
	else if (count % 5 == 0)
	{
		printf("Buzz");
	}
	else
	{
		printf("%d", count);
	}
if (count <= 99)
{
putchar(' ');
}
}
printf ("Buzz\n");
return (0);
}
