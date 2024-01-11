#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
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
    dlistint_t *new_node, *current;
    unsigned int i = 0;

    /* Check if h is NULL */
    if (h == NULL)
        return NULL;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;

    /* Initialize the new node */
    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = NULL;

    /* If idx is 0, insert at the beginning */
    if (idx == 0) {
        new_node->next = *h;
        if (*h != NULL)
            (*h)->prev = new_node;
        *h = new_node;
        return new_node;
    }

    /* Traverse the list to find the node at idx - 1 */
    current = *h;
    while (current != NULL && i < idx - 1) {
        current = current->next;
        i++;
    }

    /* Check if idx is beyond the end of the list */
    if (current == NULL) {
        free(new_node);
        return NULL;
    }

    /* Insert the new node after the node at idx - 1 */
    new_node->next = current->next;
    new_node->prev = current;
    if (current->next != NULL)
        current->next->prev = new_node;
    current->next = new_node;

    return new_node;
}

