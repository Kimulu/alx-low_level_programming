#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given index of a list
 * @head: Double pointer to the head of the listint_t list.
 * @index: Index of the node to be deleted, starting at 0.
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *temp;
unsigned int i = 0;
if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
temp = *head;
*head = temp->next;
free(temp);
return (1);
}
current = *head;
while (i < index - 1 && current != NULL)
{
current = current->next;
i++;
}
if (current == NULL || current->next == NULL)
return (-1);
temp = current->next;
current->next = temp->next;
free(temp);
return (1);
}

