#include "lists.h"
/**
 * listint_len - Count number of elements
 * @h: list
 * Return: count
*/

size_t listint_len(const listint_t *h)
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
