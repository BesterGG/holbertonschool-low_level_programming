#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - rtfm
 * @dest: var dest
 * @src: var ori
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
size_t dest_len = strlen(dest);
size_t i;

	for (i = 0 ; src[i] != '\0' ; i++)
	dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
