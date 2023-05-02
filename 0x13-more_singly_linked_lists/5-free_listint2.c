#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees a list
 * @head: pointer to the start  of the list
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}
	head = NULL;
}
