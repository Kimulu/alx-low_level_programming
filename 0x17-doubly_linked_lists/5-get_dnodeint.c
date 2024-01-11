#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Definition of a doubly linked list node
 * @index: A pointer to the pointer to the head of the list.
 * Return: nth node
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;
dlistint_t *current = head;

while (current != NULL && count < index)
{
current = current->next;
count++;
}

if (count == index && current != NULL)
{
return current;
} else {
return (NULL);
}
}
