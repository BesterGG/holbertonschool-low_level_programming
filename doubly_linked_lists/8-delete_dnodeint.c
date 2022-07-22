#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a new node at a given position
 *
 * @head: pointer to list_t
 * @index:  is the index of the node
 *
 * Return: nth node of a listint_t linked list
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp = *head;
dlistint_t *aft;

	if (!tmp)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		(*head)->prev = NULL;
		return (1);
	}
	for (; index != 0; index--)
	{
		if (tmp == NULL)
			return (-1);
	tmp = tmp->next;
	}
aft = tmp->next;
tmp = aft->prev;
tmp->next = aft->next;
aft->next->prev = tmp;

free(aft);
aft = NULL;
return (1);
}
