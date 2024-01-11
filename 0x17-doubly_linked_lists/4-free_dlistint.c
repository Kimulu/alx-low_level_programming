#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Function to free a dlistint_t list
 * @head: A pointer to the pointer to the head of the list.
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
dlistint_t *next_node;

while (current != NULL)
{
next_node = current->next;
free(current);
current = next_node;
}
}
