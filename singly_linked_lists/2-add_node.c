#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
* add_node - agrega nodo al inicio
* @head: head
* @str: string
* Return: head
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newlist;

	newlist = malloc(sizeof(list_t));

	if (!newlist)
		return (NULL);
	if (newlist != NULL)
	{
		newlist->str = strdup(str);
		newlist->len = strlen(str);
		newlist->next = (*head);
		(*head) = newlist;
	}
return (*head);
}
