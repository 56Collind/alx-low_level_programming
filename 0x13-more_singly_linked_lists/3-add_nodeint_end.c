#include "list.h"
/**
 * add_nodeint_end - add a new node at the end of the linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in the new node created
 * Return: pointer to the new node or 0 if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	linstint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;
	return (*head);
}
