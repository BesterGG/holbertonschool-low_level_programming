#include "main.h"
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
char *pos;
int a;
int lens1, lens2;
int suma;
int k;
k = 0;
if(s1 == NULL)
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

pos = malloc(lens1 + lens2 * sizeof(char) + 1);

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
