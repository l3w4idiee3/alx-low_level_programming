#include "list.h"
#include <string.h>
/**
 * add_node_end - add new new to the end of list pointed to by `head'
 * @head: pointer to the statr of the list
 * @str: pointer to string
 * Return: address of new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new != NULL)
		return (NULL);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
		list_t *last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (new);
}
