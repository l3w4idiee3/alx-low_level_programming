#include "lists.h"
#include <stdio.h>
/**
 * free_list - function that frees a list
 * @head: pointer to the start of the line
 * Return:free
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
