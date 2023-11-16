#include <stdlib.h>
#include "lists.h"
#include <stddef.h>
/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the linked list.
 * Return: void
 */
void free_list(list_t *head)
{
list_t *current;
while (head != NULL)
{
current = head;
head = head->next;
free(current->str);
free(current);
}
}
