#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * create_dnode - Creates a new doubly linked list node.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *create_dnode(int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;

return (new_node);
}

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head of the doubly linked list.
 * @idx: Index where the new node should be added. Index starts at 0.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node;
dlistint_t *current;
unsigned int i;
if (h == NULL)
return (NULL);

new_node = create_dnode(n);
if (new_node == NULL)
return (NULL);

if (idx == 0)
{
new_node->next = *h;
if (*h != NULL)
(*h)->prev = new_node;
*h = new_node;
return (*h);
}

current = *h;

for (i = 0; i < idx - 1 && current != NULL; i++)
current = current->next;

if (current == NULL)
{
free(new_node);
return (NULL);
}

new_node->next = current->next;
new_node->prev = current;

if (current->next != NULL)
current->next->prev = new_node;

current->next = new_node;
return (current->next);
}

