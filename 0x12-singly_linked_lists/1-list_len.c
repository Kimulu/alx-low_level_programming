#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
*list_len -  function for returning the number of elements
*@h: the linked list
*Return: returns the number of elements
*/
size_t list_len(const list_t *h)
{
size_t node_count = 0;
while (h != NULL)
{
h = h->next;
node_count++;
}
return (node_count);
}
