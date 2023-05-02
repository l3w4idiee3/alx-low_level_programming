#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees a list
 * @head: pointer to the start  of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *prev;

	while (*head != NULL)
	{
		prev = *head;
		*head = (*head)->next;
		free(prev);
	}
	*head = NULL;
}
