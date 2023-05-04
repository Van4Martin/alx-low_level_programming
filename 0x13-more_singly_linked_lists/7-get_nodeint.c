#include "lists.h"

/**
 * get_nodeint_at_index - rturns the nth node
 * @head: pjdhfh
 * @index: dhfjf
 *
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;
	listint_t *node = head;

	for (j = 0; j < index; j++)
	{
		if (node == NULL)
		{
			return (NULL);
		}
		node = node->next;
	}
	return (node);
}
