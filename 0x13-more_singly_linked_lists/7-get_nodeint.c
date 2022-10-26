#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at certain index
 * @head: pointer to the 1st node in the linked lists
 * @index: index of the node to return
 * Return: pointer to the node or 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
