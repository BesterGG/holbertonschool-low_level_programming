#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenate arrays in a new array
 * @s1: first
 * @s2: second
 * Return: pos
*/
char *str_concat(char *s1, char *s2)
{
char *pos;
int a;
int lens1, lens2;
int suma;
int k;
k = 0;
if (s1 == NULL)
{
lens1 = 0;
}
else
{
lens1 = strlen(s1);
}
if (s2 == NULL)
{
lens2 = 0;
}
else
{
lens2 = strlen(s2);
}
suma = lens1 + lens2;

pos = malloc((suma * sizeof(char)) + 1);
if (pos == NULL)
{
return (NULL);
}
	for (a = 0; a < lens1; a++)
	{
		pos[a] = s1[a];
	}
	for (; a < suma; a++)
	{
		pos[a] = s2[k];
	k++;
	}
pos[a] = '\0';

return (pos);
}
