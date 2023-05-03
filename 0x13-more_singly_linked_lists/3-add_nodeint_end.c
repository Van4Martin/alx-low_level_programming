#include "lists.h"

/**
 * add_nodeint_end -  function that adds a new
 * node at the end of a listint_t list
 * @head: pointer to head
 * @n: intefudfhf
 *
 * Return: Adress
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *old_node = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (old_node->next != NULL)
		{
			old_node = old_node->next;
		}
		old_node->next = new_node;
	}
	return (new_node);
}
