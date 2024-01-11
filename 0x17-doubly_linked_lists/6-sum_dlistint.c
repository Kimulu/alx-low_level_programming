#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - Get the sum of all the elements in the list
 * @head: A pointer to the head of the list.
 * Return: sum of the list
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
