#include "main.h"
#include <string.h>
/**
 * string_toupper - string in uppercase
 * @a: array definido
 * Return: array con uppercase
*/
char *string_toupper(char *a)
{
int i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	i++;
	}
return (a);
}
