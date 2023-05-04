#include "lists.h"
/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: head of the list
* Return: the head node’s data (n)
*/
int pop_listint(listint_t **head)
{
	int s;
	listint_t *new, *tmp;

	if (head == NULL)
	{
		return (0);
	}
	tmp = new = *head;
	if (*head)
	{
		s = new->n;
		*head = new->next;
		free(tmp);
	}
	else
		s = 0;
	return (s);
}
