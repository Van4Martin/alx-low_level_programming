#include "lists.h"

/**
 * pop_listint - delete the head o f node
 * @head: pointer to pointer head
 *
 * Return: n
 *
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp = malloc(sizeof(listint_t));

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);

	return (data);
}
