#include "lists.h"
/**
 * insert_nodeint_at_index - inserta nodo en el lugar del index
 * @head: pointer to pointer
 * @idx: position to ad newnode
 * Return: coso
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *p, *afterp;

p = *head;
afterp = malloc(sizeof(listint_t));

	if (afterp == NULL)
		return (NULL);
afterp->n = n;

	if (idx == 0)
	{
		afterp->next = p;
		*head = afterp;
		return (*head);
	}
	while (idx > 1)
	{
		p = p->next
		idx--;
	}
	if (p == NULL)
	{
		free (afterp);
		return (NULL);
	}
afterp->next = p->next;
p->next = afterp;
return (afterp);
}
