#include "lists.h"
/**
 * sum_listint - suma n
 * @head: head linked list
 * Return: suma total de n
*/
int sum_listint(listint_t *head)
{
int suma= 0;

if (!head)
	return (0);
	while (head)
	{
		head = head->next;
		suma += n;
	}
return (suma);
}
