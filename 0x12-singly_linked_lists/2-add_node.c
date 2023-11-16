#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stddef.h>
/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the head of the linked list.
 * @str: String to be duplicated and stored in the new node.
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
const char *temp = str;
unsigned int len = 0;
list_t *new_node;
if (str == NULL)
return (NULL);
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
while (*temp)
{
len++;
temp++;
}
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = len;
new_node->next = *head;
*head = new_node;
return (new_node);
}

