#include "lists.h"

/**
 * listint_len - returns the number of elements in the liat
 * @h: pointer to head
 *
 * Return: No of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
