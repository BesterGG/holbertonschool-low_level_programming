#include "lists.h"
/**
 * free_listint - free
 * @head: head
 * Return: void
*/
void free_listint(listint_t *head)
{
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
}
