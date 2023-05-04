#include "lists.h"

/**
 * free_listint2 -  a function that frees a listint_t list.
 * @head: a pointer to a pointer that points to head
 *
 * Return: Nothing
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	while (*head != NULL)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}
}
