#include "lists.h"

/**
 * add_node - adds new node at the begining of list
 * @head: to be defined
 * @str: to be difined;
 *
 * Return: New node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newer = malloc(sizeof(list_t));

	if (newer == NULL)
		return (NULL);

	newer->str = strdup(str);
	if (newer->str == NULL)
	{
		free(newer);
		return (NULL);
	}
	newer->len = strlen(str);
	newer->next = *head;
	*head = newer;
	return (newer);
}
