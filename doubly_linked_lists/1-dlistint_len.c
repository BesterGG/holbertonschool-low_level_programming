#include "lists.h"
/**
 * dlistint_len - Count number of elements
 * @h: list
 * Return: count
*/
size_t dlistint_len(const dlistint_t *h)
{
int count = 0;

	if (h == NULL)
		return (count);
	while (h)
	{
		count++;
		h = h->next;
	}
return (count);
}

