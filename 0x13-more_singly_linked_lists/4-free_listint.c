#include "lists.h"

/**
 * free_listint -  a function that frees a listint_t list.
 * @head: Pointer to head
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
