#include "lists.h"

/**
 * print_listint - prints the elements of a list
 * @h: pointer to head
 *
 * Return: Number of nodes..
 */
size_t print_listint(const listint_t *h)
{
	size_t increment = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		increment++;
	}
	return (increment);
}
