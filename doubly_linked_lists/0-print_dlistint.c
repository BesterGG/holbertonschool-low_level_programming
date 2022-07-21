#include <stdio.h>
#include "lists.h"
/**
* print_listint - Print lists dou
* @h: list
* Return: Count
*/
size_t dlistint_len(const dlistint_t *h)
{
int count = 0;
const dlistint_t *p = h;

for (; p; p = p->next)
{
if (p->n)
{
printf("%d", p->n);
}
count++;
putchar(10);
}
return (count);
}
