#include "lists.h"
/**
* free_listint - frees a linked list
* @head: listint_t list to be freed
*/
void free_listint(listint_t *head)
{
head = malloc(sizeof(listint_t))
if (head == NULL)
free(head);
}
