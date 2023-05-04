#include "lists.h"
/**
* insert_nodeint_at_index - inserts a new node at a given psiton.
* @head: A pointer to the head of the listint_t list
* @idx: the index of the list where the new node should be added.
* @n: The integer for the new node to contain.
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *m = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = m;
		*head = new;
		return (new);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (m == NULL || m->next == NULL)
			return (NULL);

		m = m->next;
	}

	new->next = m->next;
	m->next = new;

	return (new);
}
