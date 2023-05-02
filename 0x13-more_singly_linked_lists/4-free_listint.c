#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - freeing a list
 * @head: pointer to the start of the line
 * Return: free
 */
void free_listint(listint_t *head)
{
	listint_t *rev;
	{
	while ((rev = head) != NULL)
		head = head->next;
		free(rev->next);
	}
	free(rev);
}
