#include "lists.h"
/**
 * sum_dlistint - suma n
 * @head: head linked list
 * Return: suma total de n
*/
int sum_dlistint(dlistint_t *head)
{
int suma = 0;

	if (!head)
	{
		return (0);
	}
	while (head)
	{
		suma += head->n;
		head = head->next;
	}
return (suma);
}
