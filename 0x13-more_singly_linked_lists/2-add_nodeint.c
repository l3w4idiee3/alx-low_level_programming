#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adding a new node at the begginingof a list
 * @head:pointer to the start of list
 * @n: node to be added
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	size_t i = 0;

	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->n = stdup(n);
	if (new->n)
		while (new->n[i])
			i++;
	new->len = i;
	*head = new;
	return (new);
}
