#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node to be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

current = *head;

if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}

for (i = 0; i < index && current != NULL; i++)
current = current->next;

if (current == NULL)
return (-1);

if (current->next != NULL)
current->next->prev = current->prev;

if (current->prev != NULL)
current->prev->next = current->next;

free(current);
return (1);
}

