#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int num = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		num++;
		current = current->next;
	}
	return (num);
}
