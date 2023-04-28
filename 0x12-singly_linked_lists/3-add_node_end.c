#include "lists.h"

/**
 * add_node_end - adds new node at the begining of list
 * @head: to be defined
 * @str: to be difined;
 *
 * Return: New node
 */
list_t *add_node_end (list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *old_node = *head; 

	if (new_node == NULL)
		return (NULL); 

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node); 
		return (NULL);
	}
	new_node->len = strlen(str); 

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



